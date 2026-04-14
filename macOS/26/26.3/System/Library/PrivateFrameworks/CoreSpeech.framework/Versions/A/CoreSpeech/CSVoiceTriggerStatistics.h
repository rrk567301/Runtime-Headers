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

- (void)clearFalseFirstPassTriggersPerHour;
- (void)resetVTEstimationStatistics;
- (int)_convertToFirstPassSource:(id)a0;
- (void)incrementVTRejectCount;
- (void)voiceTriggerDidDetectSpeakerReject:(id)a0;
- (void)incrementFirstPassTriggerCount;
- (id)init;
- (double)getLastPHSRejectTime;
- (void)voiceTriggerDidDetectNearMiss:(id)a0 deviceId:(id)a1;
- (unsigned long long)triggerCount;
- (void)clearFirstPassTriggerCount;
- (void)resetPHSRejectCount;
- (void)increaseTriggerCount;
- (id)getVoiceTriggerStatistics;
- (id)getVoiceTriggerDailyMetadata;
- (unsigned long long)getVTRejectCount;
- (void).cxx_destruct;
- (void)increaseFalseFirstPassTriggersPerHour;
- (void)incrementPHSRejectCount;
- (unsigned long long)getPHSRejectCount;
- (void)updateVTEstimationStatistics:(id)a0;
- (void)clearTriggerCount;
- (unsigned long long)firstPassTriggerCount;
- (void)voiceTriggerDidRejected:(id)a0 deviceId:(id)a1;
- (void)voiceTriggerDidDetectKeyword:(id)a0 deviceId:(id)a1;

@end
