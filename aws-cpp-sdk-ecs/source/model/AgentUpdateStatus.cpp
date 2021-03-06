/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/ecs/model/AgentUpdateStatus.h>
#include <aws/core/utils/HashingUtils.h>

using namespace Aws::Utils;

static const int PENDING_HASH = HashingUtils::HashString("PENDING");
static const int STAGING_HASH = HashingUtils::HashString("STAGING");
static const int STAGED_HASH = HashingUtils::HashString("STAGED");
static const int UPDATING_HASH = HashingUtils::HashString("UPDATING");
static const int UPDATED_HASH = HashingUtils::HashString("UPDATED");
static const int FAILED_HASH = HashingUtils::HashString("FAILED");

namespace Aws
{
namespace ECS
{
namespace Model
{
namespace AgentUpdateStatusMapper
{
AgentUpdateStatus GetAgentUpdateStatusForName(const Aws::String& name)
{
  int hashCode = HashingUtils::HashString(name.c_str());

  if (hashCode == PENDING_HASH)
  {
    return AgentUpdateStatus::PENDING;
  }
  else if (hashCode == STAGING_HASH)
  {
    return AgentUpdateStatus::STAGING;
  }
  else if (hashCode == STAGED_HASH)
  {
    return AgentUpdateStatus::STAGED;
  }
  else if (hashCode == UPDATING_HASH)
  {
    return AgentUpdateStatus::UPDATING;
  }
  else if (hashCode == UPDATED_HASH)
  {
    return AgentUpdateStatus::UPDATED;
  }
  else if (hashCode == FAILED_HASH)
  {
    return AgentUpdateStatus::FAILED;
  }

  return AgentUpdateStatus::NOT_SET;
}

Aws::String GetNameForAgentUpdateStatus(AgentUpdateStatus value)
{
  switch(value)
  {
  case AgentUpdateStatus::PENDING:
    return "PENDING";
  case AgentUpdateStatus::STAGING:
    return "STAGING";
  case AgentUpdateStatus::STAGED:
    return "STAGED";
  case AgentUpdateStatus::UPDATING:
    return "UPDATING";
  case AgentUpdateStatus::UPDATED:
    return "UPDATED";
  case AgentUpdateStatus::FAILED:
    return "FAILED";
  default:
    return "";
  }
}

} // namespace AgentUpdateStatusMapper
} // namespace Model
} // namespace ECS
} // namespace Aws
