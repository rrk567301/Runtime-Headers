@class NSString, NSMutableDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CSVoiceTriggerStatistics : NSObject <CSVoiceTriggerDelegate> {
    unsigned long long _triggerCount;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _consecutiveVTRejects;
    unsigned long long _firstPassTriggerCount;
    unsigned long long _consecutiveFalseFirstPassTriggersPerHour;
    NSObject<OS_dispatch_source> *_hourPowerTimer;
    NSMutableArray *_vtEstimationStatistics;
    NSMutableDictionary *_vtDailyMetadata;
    BOOL _vtEstimationStatisticsAreStale;
    BOOL _vtDailyMetadataIsStale;
}

@property unsigned long long consecutivePHSRejects;
@property double lastPHSReject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (unsigned long long)getPHSRejectCount;
- (unsigned long long)triggerCount;
- (void)voiceTriggerDidRejected:(id)a0 deviceId:(id)a1;
- (int)_convertToFirstPassSource:(id)a0;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (void)increaseTriggerCount;
- (void)incrementVTRejectCount;
- (id)getVoiceTriggerStatistics;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (void)clearFalseFirstPassTriggersPerHour;
- (unsigned long long)getVTRejectCount;
- (void)clearTriggerCount;
- (void)increaseFalseFirstPassTriggersPerHour;
- (void)incrementPHSRejectCount;
- (id)getVoiceTriggerDailyMetadata;
- (void)clearFirstPassTriggerCount;
- (unsigned long long)firstPassTriggerCount;
- (void)updateVTEstimationStatistics:(id)a0;
- (void).cxx_destruct;
- (void)incrementFirstPassTriggerCount;
- (double)getLastPHSRejectTime;
- (void)resetPHSRejectCount;
- (void)resetVTEstimationStatistics;
- (id)init;

@end
