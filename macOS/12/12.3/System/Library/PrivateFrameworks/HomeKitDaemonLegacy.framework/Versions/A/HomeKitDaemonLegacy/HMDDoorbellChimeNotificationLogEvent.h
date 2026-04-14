@class NSError;

@interface HMDDoorbellChimeNotificationLogEvent : HMMLogEvent

@property unsigned long long coreUtilsLatency;
@property unsigned long long coreUtilsDestinationCount;
@property BOOL coordinationPathTriggered;
@property unsigned long long coordinationLatency;
@property (copy) NSError *coordinationError;
@property unsigned long long coordinationMode;
@property unsigned long long numHomePodsWithDoorbellChimeEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)eventName;
- (id)serializedEvent;

@end
