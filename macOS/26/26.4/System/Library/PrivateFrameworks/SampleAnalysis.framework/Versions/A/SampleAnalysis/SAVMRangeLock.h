@class NSString;

@interface SAVMRangeLock : SABlockingInfo <SASerializable> {
    unsigned long long _blockingTid;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL waiterExclusive;
@property (readonly) BOOL waiterShared;
@property (readonly) BOOL waiterAtomic;
@property (readonly) BOOL waiterStreaming;
@property (readonly) BOOL blockerExclusive;
@property (readonly) BOOL blockerShared;
@property (readonly) BOOL blockerAtomic;
@property (readonly) BOOL blockerStreaming;
@property (readonly) unsigned long long flags;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (void)addSelfToSerializationDictionary:(id)a0;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (int)blockingPid;
- (unsigned long long)blockingTid;
- (id)descriptionForPid:(int)a0 tid:(unsigned long long)a1 threadPriority:(int)a2 options:(unsigned long long)a3 nameCallback:(id /* block */)a4;
- (BOOL)displaysSomethingForPid:(int)a0 tid:(unsigned long long)a1 displayOptions:(unsigned long long)a2;

@end
