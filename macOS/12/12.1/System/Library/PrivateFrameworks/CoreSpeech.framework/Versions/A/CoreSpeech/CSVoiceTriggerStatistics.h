@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSVoiceTriggerStatistics : NSObject <CSVoiceTriggerDelegate> {
    unsigned long long _triggerCount;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _consecutivePHSRejects;
    double _lastPHSReject;
    unsigned long long _consecutiveVTRejects;
    unsigned long long _firstPassTriggerCount;
    unsigned long long _consecutiveFalseFirstPassTriggersPerHour;
    NSObject<OS_dispatch_source> *_hourPowerTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (void)voiceTriggerDidRejected:(id)a0 deviceId:(id)a1;
- (void)clearTriggerCount;
- (void)incrementFirstPassTriggerCount;
- (void)resetPHSRejectCount;
- (double)getLastPHSRejectTime;
- (unsigned long long)getPHSRejectCount;
- (void)incrementPHSRejectCount;
- (void)clearFalseFirstPassTriggersPerHour;
- (void)increaseTriggerCount;
- (void)incrementVTRejectCount;
- (void)increaseFalseFirstPassTriggersPerHour;
- (unsigned long long)triggerCount;
- (unsigned long long)getVTRejectCount;
- (void)clearFirstPassTriggerCount;
- (unsigned long long)firstPassTriggerCount;

@end
