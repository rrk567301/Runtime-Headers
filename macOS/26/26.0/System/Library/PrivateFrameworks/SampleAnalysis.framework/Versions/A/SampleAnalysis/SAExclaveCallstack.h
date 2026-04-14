@class NSString, SAExclave, SAFrame;

@interface SAExclaveCallstack : NSObject <SASerializable> {
    SAExclave *_exclave;
    SAFrame *_leafFrame;
    unsigned long long _threadNumericID;
    unsigned long long _invocationID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (void)addSelfToSerializationDictionary:(id)a0;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void).cxx_destruct;

@end
