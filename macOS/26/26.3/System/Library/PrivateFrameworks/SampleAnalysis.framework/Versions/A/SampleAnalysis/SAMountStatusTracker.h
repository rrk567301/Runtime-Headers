@class NSString, NSMutableSet, NSMutableDictionary;

@interface SAMountStatusTracker : NSObject <SASerializable> {
    NSMutableSet *_threadsSeen;
    NSMutableDictionary *_mountStatusDict;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned short x2; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)fillInThreadsSeen;
- (void)addSelfToSerializationDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;

@end
