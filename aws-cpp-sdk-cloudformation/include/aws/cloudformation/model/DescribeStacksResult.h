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
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <aws/cloudformation/model/Stack.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  /*
    <p>The output for a <a>DescribeStacks</a> action.</p>
  */
  class AWS_CLOUDFORMATION_API DescribeStacksResult
  {
  public:
    DescribeStacksResult();
    DescribeStacksResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeStacksResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /*
     <p>A list of stack structures.</p>
    */
    inline const Aws::Vector<Stack>& GetStacks() const{ return m_stacks; }

    /*
     <p>A list of stack structures.</p>
    */
    inline void SetStacks(const Aws::Vector<Stack>& value) { m_stacks = value; }

    /*
     <p>A list of stack structures.</p>
    */
    inline void SetStacks(Aws::Vector<Stack>&& value) { m_stacks = value; }

    /*
     <p>A list of stack structures.</p>
    */
    inline DescribeStacksResult& WithStacks(const Aws::Vector<Stack>& value) { SetStacks(value); return *this;}

    /*
     <p>A list of stack structures.</p>
    */
    inline DescribeStacksResult& WithStacks(Aws::Vector<Stack>&& value) { SetStacks(value); return *this;}

    /*
     <p>A list of stack structures.</p>
    */
    inline DescribeStacksResult& AddStacks(const Stack& value) { m_stacks.push_back(value); return *this; }

    /*
     <p>A list of stack structures.</p>
    */
    inline DescribeStacksResult& AddStacks(Stack&& value) { m_stacks.push_back(value); return *this; }

    /*
     String that identifies the start of the next list of stacks, if there is one.
    */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /*
     String that identifies the start of the next list of stacks, if there is one.
    */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /*
     String that identifies the start of the next list of stacks, if there is one.
    */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /*
     String that identifies the start of the next list of stacks, if there is one.
    */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /*
     String that identifies the start of the next list of stacks, if there is one.
    */
    inline DescribeStacksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /*
     String that identifies the start of the next list of stacks, if there is one.
    */
    inline DescribeStacksResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /*
     String that identifies the start of the next list of stacks, if there is one.
    */
    inline DescribeStacksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeStacksResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeStacksResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Stack> m_stacks;
    Aws::String m_nextToken;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws