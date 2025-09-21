@class NSString, SATimestamp, NSSet;

@interface SATaskState : NSObject <SASerializable> {
    unsigned int _suspendCount;
    unsigned int _faults;
    unsigned int _pageins;
    unsigned int _cowFaults;
    unsigned int _latencyQos;
    SATimestamp *_startTimestamp;
    SATimestamp *_endTimestamp;
    unsigned long long _startSampleIndex;
    unsigned long long _endSampleIndex;
    unsigned long long _taskSizeInBytes;
    unsigned long long _terminatedThreadsUserTimeInNs;
    unsigned long long _terminatedThreadsSystemTimeInNs;
    unsigned long long _terminatedThreadsInstructions;
    unsigned long long _terminatedThreadsCycles;
    NSSet *_donatingUniquePids;
    unsigned long long _ssFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) SATimestamp *startTimestamp;
@property (readonly) SATimestamp *endTimestamp;
@property (readonly) unsigned long long startSampleIndex;
@property (readonly) unsigned long long endSampleIndex;
@property (readonly) char isSuspended;
@property (readonly) unsigned int suspendCount;
@property (readonly) unsigned long long taskSizeInBytes;
@property (readonly) unsigned int faults;
@property (readonly) unsigned int pageins;
@property (readonly) unsigned int cowFaults;
@property (readonly) unsigned int latencyQos;
@property (readonly) unsigned long long terminatedThreadsUserTimeInNs;
@property (readonly) unsigned long long terminatedThreadsSystemTimeInNs;
@property (readonly) unsigned long long terminatedThreadsCpuTimeNs;
@property (readonly) unsigned long long terminatedThreadsInstructions;
@property (readonly) unsigned long long terminatedThreadsCycles;
@property (readonly) NSSet *donatingUniquePids;
@property (readonly) unsigned long long ssFlags;
@property (readonly) char isTaskResourceFlagged;
@property (readonly) char isTerminatedSnapshot;
@property (readonly) char isPidSuspended;
@property (readonly) char isFrozen;
@property (readonly) char isDarwinBG;
@property (readonly) char isDarwinExtBG;
@property (readonly) char isVisible;
@property (readonly) char isNonVisible;
@property (readonly) char isForeground;
@property (readonly) char isBoosted;
@property (readonly) char isSuppressed;
@property (readonly) char isTimerThrottled;
@property (readonly) char isImpDonor;
@property (readonly) char isLiveImpDonor;
@property (readonly) char isDirty;
@property (readonly) char wqExceededConstrainedThreadLimit;
@property (readonly) char wqExceededTotalThreadLimit;
@property (readonly) unsigned long long transitionType;
@property (readonly) char transitionIsTerminated;

+ (id)classDictionaryKey;
+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (id)stateWithStartTimestamp:(id)a0 endTimestamp:(id)a1 startSampleIndex:(unsigned long long)a2 endSampleIndex:(unsigned long long)a3;

- (void).cxx_destruct;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (char)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; unsigned char x16; unsigned long long x17; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (void)addSelfToSerializationDictionary:(id)a0;
- (id)initWithStartTimestamp:(id)a0 endTimestamp:(id)a1 startSampleIndex:(unsigned long long)a2 endSampleIndex:(unsigned long long)a3;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (unsigned long long)sampleCountInSampleIndexRangeStart:(unsigned long long)a0 end:(unsigned long long)a1;

@end
