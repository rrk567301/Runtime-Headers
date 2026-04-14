@class SATimestamp, SATask;

@interface SAHIDStepSample : NSObject {
    SATask *_task;
    unsigned long long _threadId;
    SATimestamp *_startTimestamp;
    SATimestamp *_endTimestamp;
    unsigned long long _startSampleIndex;
    unsigned long long _endSampleIndex;
}

- (void).cxx_destruct;
- (id)debugDescription;

@end
