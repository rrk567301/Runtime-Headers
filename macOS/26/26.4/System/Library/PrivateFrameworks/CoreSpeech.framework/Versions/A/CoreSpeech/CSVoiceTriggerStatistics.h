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

- (id)getVoiceTriggerDailyMetadata;
- (id)getVoiceTriggerStatistics;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;
- (void)resetPHSRejectCount;
- (void)incrementPHSRejectCount;
- (void)clearFirstPassTriggerCount;
- (void)increaseFalseFirstPassTriggersPerHour;
- (unsigned long long)getVTRejectCount;
- (void)incrementFirstPassTriggerCount;
- (void).cxx_destruct;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerDidRejected:(id)a0 deviceId:(id)a1;
- (double)getLastPHSRejectTime;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (void)clearFalseFirstPassTriggersPerHour;
- (id)init;
- (void)updateVTEstimationStatistics:(id)a0;
- (unsigned long long)triggerCount;
- (void)clearTriggerCount;
- (void)increaseTriggerCount;
- (void)resetVTEstimationStatistics;
- (unsigned long long)getPHSRejectCount;
- (unsigned long long)firstPassTriggerCount;
- (int)_convertToFirstPassSource:(id)a0;
- (void)incrementVTRejectCount;

@end
