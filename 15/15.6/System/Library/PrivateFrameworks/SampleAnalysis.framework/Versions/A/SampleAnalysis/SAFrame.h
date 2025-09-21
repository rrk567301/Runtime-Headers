@class SABinaryLoadInfo, NSString, SAInstruction, SAExclave;

@interface SAFrame : NSObject <SASerializable, SAJSONSerialization> {
    union { unsigned char bits; struct { unsigned char isSymbolicationOffByOne : 1; unsigned char isSwiftAsync : 1; unsigned char isKernel : 1; unsigned char isTruncatedBacktraceFrame : 1; unsigned char isLeafyCallstackIsInAnotherCallTreeFrame : 1; } ; } _bools;
    unsigned long long _address;
    SABinaryLoadInfo *_binaryLoadInfo;
    SAFrame *_parentFrame;
    id _childFrameOrFrames;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long address;
@property (readonly) SAInstruction *instruction;
@property (readonly) char isSymbolicationOffByOne;
@property (readonly) char isSwiftAsync;
@property (readonly) char isKernel;
@property (readonly) char isExclave;
@property (readonly) SAExclave *exclave;
@property (readonly) char isRootFrame;
@property (readonly) char isFakeFrame;
@property (readonly) char isTruncatedBacktraceFrame;
@property (readonly) char isLeafyCallstackIsInAnotherCallTreeFrame;

+ (void)printFrameTree:(id)a0;
+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (char)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; unsigned int x4; unsigned long long x5; union { unsigned char x0; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; } x1; } x6; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)addSelfToSerializationDictionary:(id)a0;
- (id)copyWithNewParent:(id)a0;
- (id)initCopyingFrame:(id)a0 withParent:(id)a1;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)writeJSONDictionaryEntriesToStream:(id)a0;

@end
