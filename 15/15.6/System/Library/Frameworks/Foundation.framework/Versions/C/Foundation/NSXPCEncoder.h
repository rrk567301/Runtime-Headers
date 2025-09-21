@class NSXPCConnection, NSObject;
@protocol OS_xpc_object, NSXPCEncoderDelegate;

@interface NSXPCEncoder : NSXPCCoder {
    NSObject<OS_xpc_object> *_oolObjects;
    NSXPCConnection *_connection;
    struct __CFDictionary { } *_replacedByDelegateObjects;
    struct { unsigned long long collectionSizeOffset[1024]; long long collectionRecursionIndex; unsigned long long dataLen; unsigned long long dataSize; char *data; struct __CFDictionary *_objectReferences; struct __CFDictionary *_stringReferences; struct __CFDictionary *_asciiReferences; char isVM; char isStack; } _encoder;
    unsigned long long _genericIndex;
    char _topLevelDictionary;
    char _finished;
    char _askForReplacement;
}

@property (weak) id<NSXPCEncoderDelegate> delegate;

- (void)dealloc;
- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (char)allowsKeyedCoding;
- (id)connection;
- (void)encodeBool:(char)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)_setConnection:(id)a0;
- (unsigned long long)_addOOLXPCObject:(id)a0;
- (void)_encodeInvocation:(id)a0 isReply:(char)a1 into:(id)a2;
- (id)_replaceObject:(id)a0;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (void)_checkObject:(id)a0;
- (void)_encodeArrayOfObjects:(id)a0 forKey:(id)a1;
- (void)_encodeCString:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void)_encodeInvocationObjectArgumentsOnly:(id *)a0 count:(unsigned long long)a1 typeString:(const char *)a2 selector:(SEL)a3 isReply:(char)a4 into:(id)a5;
- (void)_encodeObject:(id)a0;
- (void)_encodeUnkeyedObject:(id)a0;
- (id)_newRootXPCObject;
- (void)_startTopLevelDictionary;
- (void)beginEncoding;
- (void)encodeDataObject:(id)a0;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (void)encodeXPCObject:(id)a0 forKey:(id)a1;
- (id)finishEncoding;
- (id)initWithStackSpace:(char *)a0 size:(unsigned long long)a1;

@end
