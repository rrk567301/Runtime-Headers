@class NSNumber, NSMutableDictionary, NSString;

@interface MRPlaybackSessionMigrateAnalytics : NSObject

@property (retain, nonatomic) NSMutableDictionary *data;
@property (nonatomic, setter=set_handoffSourceDeviceType:) unsigned long long handoffSourceDeviceType;
@property (nonatomic, setter=set_handoffDestinationDeviceType:) unsigned long long handoffDestinationDeviceType;
@property (nonatomic, setter=set_handoffInitiator:) unsigned long long handoffInitiator;
@property (nonatomic, setter=set_handoffAppBundle:) unsigned long long handoffAppBundle;
@property (nonatomic, setter=set_handoffDestinationPerformanceClass:) unsigned long long handoffDestinationPerformanceClass;
@property (nonatomic, setter=set_handoffSourcePerformanceClass:) unsigned long long handoffSourcePerformanceClass;
@property (retain, nonatomic, setter=set_handoffQueueSize:) NSNumber *handoffQueueSize;
@property (retain, nonatomic, setter=set_isSuccess:) NSNumber *isSuccess;
@property (retain, nonatomic, setter=set_preDuration:) NSNumber *preDuration;
@property (retain, nonatomic, setter=set_durationDetermineRecipe:) NSNumber *durationDetermineRecipe;
@property (retain, nonatomic, setter=set_durationPrepare:) NSNumber *durationPrepare;
@property (retain, nonatomic, setter=set_durationApply:) NSNumber *durationApply;
@property (retain, nonatomic, setter=set_durationApply_SetPlaybackSession:) NSNumber *durationApply_SetPlaybackSession;
@property (retain, nonatomic, setter=set_durationFinalize:) NSNumber *durationFinalize;
@property (retain, nonatomic, setter=set_postDuration:) NSNumber *postDuration;
@property (retain, nonatomic, setter=set_userPerceivedHandoffTime:) NSNumber *userPerceivedHandoffTime;
@property (retain, nonatomic, setter=set_userPerceivedAudioContinuity:) NSNumber *userPerceivedAudioContinuity;
@property (retain, nonatomic, setter=set_errorLevel_0:) NSString *errorLevel_0;
@property (retain, nonatomic, setter=set_errorLevel_1:) NSString *errorLevel_1;
@property (retain, nonatomic, setter=set_errorLevelCore_1:) NSString *errorLevelCore_1;
@property (retain, nonatomic, setter=set_errorLevelCore_0:) NSString *errorLevelCore_0;
@property (retain, nonatomic, setter=set_errorOnion:) NSString *errorOnion;
@property (retain, nonatomic) NSMutableDictionary *playPerfFields;

- (id)isSuccess;
- (id)dictionaryRepresentation;
- (id)init;
- (void).cxx_destruct;
- (id)durationPrepare;
- (id)durationApply;
- (id)durationApply_SetPlaybackSession;
- (id)durationDetermineRecipe;
- (id)durationFinalize;
- (id)errorLevelCore_0;
- (id)errorLevelCore_1;
- (id)errorLevel_0;
- (id)errorLevel_1;
- (id)errorOnion;
- (unsigned long long)handoffAppBundle;
- (unsigned long long)handoffDestinationDeviceType;
- (unsigned long long)handoffDestinationPerformanceClass;
- (unsigned long long)handoffInitiator;
- (id)handoffQueueSize;
- (unsigned long long)handoffSourceDeviceType;
- (unsigned long long)handoffSourcePerformanceClass;
- (id)postDuration;
- (id)preDuration;
- (void)setHandoffAppBundleFromString:(id)a0;
- (void)setHandoffDestinationFromMRDeviceClass:(long long)a0;
- (void)setHandoffInitiatorFromString:(id)a0;
- (void)setHandoffSourceFromMRDeviceClass:(long long)a0;
- (id)userPerceivedAudioContinuity;
- (id)userPerceivedHandoffTime;

@end
