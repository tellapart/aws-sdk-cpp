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
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace AutoScaling
{
namespace Model
{
  /*
    <p>Describes a metric.</p>
  */
  class AWS_AUTOSCALING_API MetricCollectionType
  {
  public:
    MetricCollectionType();
    MetricCollectionType(const Aws::Utils::Xml::XmlNode& xmlNode);
    MetricCollectionType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /*
     <p>The metric.</p> <ul> <li><p><code>GroupMinSize</code></p></li> <li><p><code>GroupMaxSize</code></p></li> <li><p><code>GroupDesiredCapacity</code></p></li> <li><p><code>GroupInServiceInstances</code></p></li> <li><p><code>GroupPendingInstances</code></p></li> <li><p><code>GroupStandbyInstances</code></p></li> <li><p><code>GroupTerminatingInstances</code></p></li> <li><p><code>GroupTotalInstances</code></p></li> </ul>
    */
    inline const Aws::String& GetMetric() const{ return m_metric; }

    /*
     <p>The metric.</p> <ul> <li><p><code>GroupMinSize</code></p></li> <li><p><code>GroupMaxSize</code></p></li> <li><p><code>GroupDesiredCapacity</code></p></li> <li><p><code>GroupInServiceInstances</code></p></li> <li><p><code>GroupPendingInstances</code></p></li> <li><p><code>GroupStandbyInstances</code></p></li> <li><p><code>GroupTerminatingInstances</code></p></li> <li><p><code>GroupTotalInstances</code></p></li> </ul>
    */
    inline void SetMetric(const Aws::String& value) { m_metricHasBeenSet = true; m_metric = value; }

    /*
     <p>The metric.</p> <ul> <li><p><code>GroupMinSize</code></p></li> <li><p><code>GroupMaxSize</code></p></li> <li><p><code>GroupDesiredCapacity</code></p></li> <li><p><code>GroupInServiceInstances</code></p></li> <li><p><code>GroupPendingInstances</code></p></li> <li><p><code>GroupStandbyInstances</code></p></li> <li><p><code>GroupTerminatingInstances</code></p></li> <li><p><code>GroupTotalInstances</code></p></li> </ul>
    */
    inline void SetMetric(Aws::String&& value) { m_metricHasBeenSet = true; m_metric = value; }

    /*
     <p>The metric.</p> <ul> <li><p><code>GroupMinSize</code></p></li> <li><p><code>GroupMaxSize</code></p></li> <li><p><code>GroupDesiredCapacity</code></p></li> <li><p><code>GroupInServiceInstances</code></p></li> <li><p><code>GroupPendingInstances</code></p></li> <li><p><code>GroupStandbyInstances</code></p></li> <li><p><code>GroupTerminatingInstances</code></p></li> <li><p><code>GroupTotalInstances</code></p></li> </ul>
    */
    inline void SetMetric(const char* value) { m_metricHasBeenSet = true; m_metric.assign(value); }

    /*
     <p>The metric.</p> <ul> <li><p><code>GroupMinSize</code></p></li> <li><p><code>GroupMaxSize</code></p></li> <li><p><code>GroupDesiredCapacity</code></p></li> <li><p><code>GroupInServiceInstances</code></p></li> <li><p><code>GroupPendingInstances</code></p></li> <li><p><code>GroupStandbyInstances</code></p></li> <li><p><code>GroupTerminatingInstances</code></p></li> <li><p><code>GroupTotalInstances</code></p></li> </ul>
    */
    inline MetricCollectionType& WithMetric(const Aws::String& value) { SetMetric(value); return *this;}

    /*
     <p>The metric.</p> <ul> <li><p><code>GroupMinSize</code></p></li> <li><p><code>GroupMaxSize</code></p></li> <li><p><code>GroupDesiredCapacity</code></p></li> <li><p><code>GroupInServiceInstances</code></p></li> <li><p><code>GroupPendingInstances</code></p></li> <li><p><code>GroupStandbyInstances</code></p></li> <li><p><code>GroupTerminatingInstances</code></p></li> <li><p><code>GroupTotalInstances</code></p></li> </ul>
    */
    inline MetricCollectionType& WithMetric(Aws::String&& value) { SetMetric(value); return *this;}

    /*
     <p>The metric.</p> <ul> <li><p><code>GroupMinSize</code></p></li> <li><p><code>GroupMaxSize</code></p></li> <li><p><code>GroupDesiredCapacity</code></p></li> <li><p><code>GroupInServiceInstances</code></p></li> <li><p><code>GroupPendingInstances</code></p></li> <li><p><code>GroupStandbyInstances</code></p></li> <li><p><code>GroupTerminatingInstances</code></p></li> <li><p><code>GroupTotalInstances</code></p></li> </ul>
    */
    inline MetricCollectionType& WithMetric(const char* value) { SetMetric(value); return *this;}

  private:
    Aws::String m_metric;
    bool m_metricHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
