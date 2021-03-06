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
#include <aws/autoscaling/model/MetricGranularityType.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

MetricGranularityType::MetricGranularityType() : 
    m_granularityHasBeenSet(false)
{
}

MetricGranularityType::MetricGranularityType(const XmlNode& xmlNode) : 
    m_granularityHasBeenSet(false)
{
  *this = xmlNode;
}

MetricGranularityType& MetricGranularityType::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode granularityNode = resultNode.FirstChild("Granularity");
    if(!granularityNode.IsNull())
    {
      m_granularity = StringUtils::Trim(granularityNode.GetText().c_str());
      m_granularityHasBeenSet = true;
    }
  }

  return *this;
}

void MetricGranularityType::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_granularityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Granularity=" << StringUtils::URLEncode(m_granularity.c_str()) << "&";
  }
}

void MetricGranularityType::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_granularityHasBeenSet)
  {
      oStream << location << ".Granularity=" << StringUtils::URLEncode(m_granularity.c_str()) << "&";
  }
}
