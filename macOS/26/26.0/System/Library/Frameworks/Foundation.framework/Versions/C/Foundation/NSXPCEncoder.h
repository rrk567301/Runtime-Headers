@class NSXPCConnection, NSObject;
@protocol OS_xpc_object, NSXPCEncoderDelegate;

@interface NSXPCEncoder : NSXPCCoder {
    NSObject<OS_xpc_object> *_oolObjects;
    NSXPCConnection *_connection;
    struct __CFDictionary { } *_replacedByDelegateObjects;
    struct { unsigned long long collectionSizeOffset[1024]; long long collectionRecursionIndex; unsigned long long dataLen; unsigned long long dataSize; char *data; struct __CFDictionary *_objectReferences; struct __CFDictionary *_stringReferences; struct __CFDictionary *_asciiReferences; BOOL isVM; BOOL isStack; } _encoder;
    unsigned long long _genericIndex;
    BOOL _topLevelDictionary;
    BOOL _finished;
    BOOL _askForReplacement;
}

@property (weak) id<NSXPCEncoderDelegate> delegate;

- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (BOOL)allowsKeyedCoding;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (id)_replaceObject:(id)a0;
- (void)_startTopLevelDictionary;
- (id)debugDescription;
- (void)dealloc;
- (void)encodeXPCObject:(id)a0 forKey:(id)a1;
- (void)encodeDataObject:(id)a0;
- (void)_encodeUnkeyedObject:(id)a0;
- (void)_encodeArrayOfObjects:(id)a0 forKey:(id)a1;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (id)init;
- (id)finishEncoding;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (id)_newRootXPCObject;
- (void)_encodeObject:(id)a0;
- (void)_setConnection:(id)a0;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (void)_encodeInvocationObjectArgumentsOnly:(id *)a0 count:(unsigned long long)a1 typeString:(const char *)a2 selector:(SEL)a3 isReply:(BOOL)a4 into:(id)a5;
- (void)_encodeInvocation:(id)a0 isReply:(BOOL)a1 into:(id)a2;
- (void)_checkObject:(id)a0;
- (void)beginEncoding;
- (unsigned long long)_addOOLXPCObject:(id)a0;
- (id)connection;
- (void)_encodeCString:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (id)initWithStackSpace:(char *)a0 size:(unsigned long long)a1;
- (void).cxx_destruct;

@end
