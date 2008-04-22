/*
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The ASF licenses this file to You under the Apache License, Version 2.0
 * (the "License"); you may not use this file except in compliance with
 * the License.  You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * $Id$
 */

#include "DOM_RangeException.hpp"

XERCES_CPP_NAMESPACE_BEGIN



DOM_RangeException::DOM_RangeException()
: DOM_DOMException()
{
        code = (RangeExceptionCode) 0;
};


DOM_RangeException::DOM_RangeException(RangeExceptionCode exCode, const DOMString &message)
: DOM_DOMException(exCode, message)
{
   code = exCode;
};


DOM_RangeException::DOM_RangeException(const DOM_RangeException &other)
: DOM_DOMException(other)
{
        code = other.code;
};


DOM_RangeException::~DOM_RangeException()
{
};

XERCES_CPP_NAMESPACE_END
