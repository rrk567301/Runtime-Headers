@class NSString, NSArray, NSDateInterval, NSDictionary, SMTUserProfileMetadata;

@interface SMTRequestContextDataMutating : NSObject

@property (copy, nonatomic) NSString *audioSource;
@property (copy, nonatomic) NSString *audioDestination;
@property (copy, nonatomic) NSString *responseMode;
@property (nonatomic) char isEyesFree;
@property (nonatomic) char isVoiceTriggerEnabled;
@property (nonatomic) char isTextToSpeechEnabled;
@property (nonatomic) char isTriggerlessFollowup;
@property (copy, nonatomic) NSArray *bargeInModes;
@property (copy, nonatomic) NSDateInterval *approximatePreviousTTSInterval;
@property (copy, nonatomic) NSArray *deviceRestrictions;
@property (copy, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (nonatomic) unsigned int voiceAudioSessionId;
@property (nonatomic) char isSystemApertureEnabled;
@property (nonatomic) char isInAmbient;
@property (nonatomic) char isLiveActivitiesSupported;
@property (nonatomic) char isDeviceShowingLockScreen;
@property (nonatomic) char isDeviceLocked;
@property (retain, nonatomic) SMTUserProfileMetadata *userProfileMetadata;
@property (nonatomic) unsigned long long activationTime;

- (void).cxx_destruct;

@end
