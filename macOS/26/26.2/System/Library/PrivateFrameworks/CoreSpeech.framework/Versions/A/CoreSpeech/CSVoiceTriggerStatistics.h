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

- (id)getVoiceTriggerStatistics;
- (void)incrementFirstPassTriggerCount;
- (void)voiceTriggerDidRejected:(id)a0 deviceId:(id)a1;
- (void)increaseTriggerCount;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (void)clearFirstPassTriggerCount;
- (void)updateVTEstimationStatistics:(id)a0;
- (int)_convertToFirstPassSource:(id)a0;
- (unsigned long long)triggerCount;
- (unsigned long long)getVTRejectCount;
- (void)incrementPHSRejectCount;
- (void).cxx_destruct;
- (unsigned long long)firstPassTriggerCount;
- (unsigned long long)getPHSRejectCount;
- (void)clearTriggerCount;
- (void)resetVTEstimationStatistics;
- (void)resetPHSRejectCount;
- (double)getLastPHSRejectTime;
- (id)init;
- (void)increaseFalseFirstPassTriggersPerHour;
- (id)getVoiceTriggerDailyMetadata;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (void)incrementVTRejectCount;
- (void)clearFalseFirstPassTriggersPerHour;

@end
