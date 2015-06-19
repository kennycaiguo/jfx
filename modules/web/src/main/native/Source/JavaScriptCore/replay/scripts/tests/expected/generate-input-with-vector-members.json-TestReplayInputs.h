/*
 * Copyright (C) 2014 Apple Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS
 * IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
 * TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 * PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// DO NOT EDIT THIS FILE. It is automatically generated from generate-input-with-vector-members.json
// by the script: JavaScriptCore/replay/scripts/CodeGeneratorReplayInputs.py

#ifndef generate_input_with_vector_members_json_TestReplayInputs_h
#define generate_input_with_vector_members_json_TestReplayInputs_h

#if ENABLE(WEB_REPLAY)
#include "InternalNamespaceHeaderIncludeDummy.h"
#include <platform/ExternalNamespaceHeaderIncludeDummy.h>

namespace WebCore {
class WebThing;
}

namespace JSC {
class JSThing;
}


namespace Test {
class ArrayOfThings;
} // namespace Test

namespace JSC {
template<> struct InputTraits<Test::ArrayOfThings> {
    static InputQueue queue() { return InputQueue::ScriptMemoizedData; }
    static const AtomicString& type();

    static void encode(JSC::EncodedValue&, const Test::ArrayOfThings&);
    static bool decode(JSC::EncodedValue&, std::unique_ptr<Test::ArrayOfThings>&);
};

} // namespace JSC

namespace Test {
class ArrayOfThings : public NondeterministicInput<ArrayOfThings> {
public:
    ArrayOfThings(Vector<double>& doubles, Vector<JSThing>& jsthings, Vector<WebThing>& webthings);
    virtual ~ArrayOfThings();

    const Vector<double>& doubles() const { return m_doubles; }
    const Vector<JSThing>& jsthings() const { return m_jsthings; }
    const Vector<WebThing>& webthings() const { return m_webthings; }
private:
    Vector<double> m_doubles;
    Vector<JSThing> m_jsthings;
    Vector<WebThing> m_webthings;
};
} // namespace Test

#define TEST_REPLAY_INPUT_NAMES_FOR_EACH(macro) \
    macro(ArrayOfThings) \
    \
// end of TEST_REPLAY_INPUT_NAMES_FOR_EACH

#endif // ENABLE(WEB_REPLAY)

#endif // generate-input-with-vector-members.json-TestReplayInputs_h