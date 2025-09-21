@class NSString, SATimestamp, SAFrame, NSMutableArray;

@interface SAThread : NSObject <SASerializable> {
    char _isGlobalForcedIdle;
    char _isMainThread;
    SATimestamp *_creationTimestamp;
    SATimestamp *_exitTimestamp;
    SAFrame *_resampledLeafUserFrame;
    SAFrame *_resampledleafOfCRootFramesReplacedBySwiftAsync;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long threadId;
@property (readonly) SATimestamp *creationTimestamp;
@property (readonly) SATimestamp *exitTimestamp;
@property (readonly) char isGlobalForcedIdle;
@property (readonly) char isProcessorIdleThread;
@property (readonly) char isMainThread;
@property (readonly) NSMutableArray *threadStates;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithId:(unsigned long long)a0;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (char)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned int x5; union { unsigned short x0; struct { unsigned char x0 : 1; unsigned char x1 : 1; } x1; } x6; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)addSelfToSerializationDictionary:(id)a0;
- (void)enumerateThreadStatesBetweenStartTime:(id)a0 endTime:(id)a1 reverseOrder:(char)a2 withSampleIndex:(char)a3 block:(id /* block */)a4;
- (void)enumerateThreadStatesBetweenStartTime:(id)a0 startSampleIndex:(unsigned long long)a1 endTime:(id)a2 endSampleIndex:(unsigned long long)a3 reverseOrder:(char)a4 block:(id /* block */)a5;
- (id)firstThreadStateOnOrAfterTime:(id)a0 sampleIndex:(unsigned long long)a1;
- (id)firstThreadStateOnOrAfterTime:(id)a0 withSampleIndex:(char)a1;
- (unsigned long long)indexOfFirstThreadStateOnOrAfterTime:(id)a0 sampleIndex:(unsigned long long)a1;
- (unsigned long long)indexOfFirstThreadStateOnOrAfterTime:(id)a0 withSampleIndex:(char)a1;
- (unsigned long long)indexOfLastThreadStateOnOrBeforeTime:(id)a0 sampleIndex:(unsigned long long)a1;
- (unsigned long long)indexOfLastThreadStateOnOrBeforeTime:(id)a0 withSampleIndex:(char)a1;
- (id)lastThreadStateOnOrBeforeTime:(id)a0 sampleIndex:(unsigned long long)a1;
- (id)lastThreadStateOnOrBeforeTime:(id)a0 withSampleIndex:(char)a1;
- (id)patchedStackForTruncatedStack:(id)a0;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (unsigned long long)sampleCountInTimestampRangeStart:(id)a0 end:(id)a1;

@end
