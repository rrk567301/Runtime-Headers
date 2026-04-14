@class NSString, NSArray, NSDateInterval, NSDictionary, SMTUserProfileMetadata;

@interface SMTRequestContextDataMutating : NSObject

@property (copy, nonatomic) NSString *audioSource;
@property (copy, nonatomic) NSString *audioDestination;
@property (copy, nonatomic) NSString *responseMode;
@property (nonatomic) BOOL isEyesFree;
@property (nonatomic) BOOL isVoiceTriggerEnabled;
@property (nonatomic) BOOL isTextToSpeechEnabled;
@property (nonatomic) BOOL isTriggerlessFollowup;
@property (copy, nonatomic) NSArray *bargeInModes;
@property (copy, nonatomic) NSDateInterval *approximatePreviousTTSInterval;
@property (copy, nonatomic) NSArray *deviceRestrictions;
@property (copy, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (nonatomic) unsigned int voiceAudioSessionId;
@property (nonatomic) BOOL isSystemApertureEnabled;
@property (nonatomic) BOOL isInAmbient;
@property (nonatomic) BOOL isLiveActivitiesSupported;
@property (nonatomic) BOOL isDeviceShowingLockScreen;
@property (nonatomic) BOOL isDeviceLocked;
@property (retain, nonatomic) SMTUserProfileMetadata *userProfileMetadata;
@property (nonatomic) unsigned long long activationTime;

- (void).cxx_destruct;

@end
