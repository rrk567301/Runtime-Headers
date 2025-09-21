@class NSString, NSArray, NSDateInterval, NSDictionary, SMTUserProfileMetadata;

@interface SMTRequestContextData : NSObject

@property (readonly, copy, nonatomic) NSString *audioSource;
@property (readonly, copy, nonatomic) NSString *audioDestination;
@property (readonly, copy, nonatomic) NSString *responseMode;
@property (readonly, nonatomic) char isEyesFree;
@property (readonly, nonatomic) char isVoiceTriggerEnabled;
@property (readonly, nonatomic) char isTextToSpeechEnabled;
@property (readonly, nonatomic) char isTriggerlessFollowup;
@property (readonly, copy, nonatomic) NSArray *bargeInModes;
@property (readonly, copy, nonatomic) NSDateInterval *approximatePreviousTTSInterval;
@property (readonly, copy, nonatomic) NSArray *deviceRestrictions;
@property (readonly, copy, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (readonly, nonatomic) unsigned int voiceAudioSessionId;
@property (readonly, nonatomic) char isSystemApertureEnabled;
@property (readonly, nonatomic) char isInAmbient;
@property (readonly, nonatomic) char isLiveActivitiesSupported;
@property (readonly, nonatomic) char isDeviceShowingLockScreen;
@property (readonly, nonatomic) char isDeviceLocked;
@property (readonly, nonatomic) SMTUserProfileMetadata *userProfileMetadata;
@property (readonly, nonatomic) unsigned long long activationTime;

- (id)init;
- (void).cxx_destruct;
- (id)initWithBuilder:(id /* block */)a0;
- (id)_sanitizeVoiceTriggerEventInfo:(id)a0;

@end
