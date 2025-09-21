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

- (unsigned long long)triggerCount;
- (id)getVoiceTriggerStatistics;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (id)init;
- (void)increaseTriggerCount;
- (void)clearFalseFirstPassTriggersPerHour;
- (unsigned long long)firstPassTriggerCount;
- (int)_convertToFirstPassSource:(id)a0;
- (void)voiceTriggerDidRejected:(id)a0 deviceId:(id)a1;
- (void)clearFirstPassTriggerCount;
- (void)incrementVTRejectCount;
- (void)resetPHSRejectCount;
- (unsigned long long)getVTRejectCount;
- (void)clearTriggerCount;
- (void)incrementFirstPassTriggerCount;
- (void)incrementPHSRejectCount;
- (unsigned long long)getPHSRejectCount;
- (void)updateVTEstimationStatistics:(id)a0;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (double)getLastPHSRejectTime;
- (void)increaseFalseFirstPassTriggersPerHour;
- (id)getVoiceTriggerDailyMetadata;
- (void).cxx_destruct;
- (void)resetVTEstimationStatistics;

@end
