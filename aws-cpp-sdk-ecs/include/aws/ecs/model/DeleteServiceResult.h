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
#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/Service.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_ECS_API DeleteServiceResult
  {
  public:
    DeleteServiceResult();
    DeleteServiceResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteServiceResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const Service& GetService() const{ return m_service; }

    
    inline void SetService(const Service& value) { m_service = value; }

    
    inline void SetService(Service&& value) { m_service = value; }

    
    inline DeleteServiceResult& WithService(const Service& value) { SetService(value); return *this;}

    
    inline DeleteServiceResult& WithService(Service&& value) { SetService(value); return *this;}

  private:
    Service m_service;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
