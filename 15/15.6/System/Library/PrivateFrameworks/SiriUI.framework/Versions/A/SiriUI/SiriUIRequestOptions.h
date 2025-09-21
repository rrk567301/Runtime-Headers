@class NSUUID, NSString, AFRequestInfo, NSURL, AFSpeechRequestOptions, NSDictionary, AFBulletin, SASPronunciationContext, NSNumber;

@interface SiriUIRequestOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long requestSource;
@property (copy, nonatomic) NSString *activationDeviceIdentifier;
@property (retain, nonatomic) AFBulletin *bulletin;
@property (copy, nonatomic) NSString *appBundleIdentifier;
@property (copy, nonatomic) NSDictionary *messagesDirectActionContext;
@property (nonatomic) long long directActionEvent;
@property (copy, nonatomic) NSString *serverCommandId;
@property (nonatomic, getter=isPronunciationRequest) char pronunciationRequest;
@property (retain, nonatomic) SASPronunciationContext *pronunciationContext;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSURL *speechFileURL;
@property (nonatomic) double expectedTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic) double buttonDownTimestamp;
@property (nonatomic) double buttonUpTimestamp;
@property (readonly, nonatomic, getter=isForSpeechRequest) char forSpeechRequest;
@property (readonly, nonatomic) long long inputType;
@property (nonatomic, getter=isInitialBringUp) char initialBringUp;
@property (nonatomic) char useAutomaticEndpointing;
@property (nonatomic) char useStreamingDictation;
@property (retain, nonatomic) NSNumber *homeButtonUpFromBeep;
@property (copy, nonatomic) NSDictionary *continuityInfo;
@property (retain, nonatomic) AFRequestInfo *requestInfo;
@property (retain, nonatomic) AFSpeechRequestOptions *speechRequestOptions;
@property (nonatomic) char acousticIdEnabled;
@property (nonatomic) char releaseAudioSessionOnRecordingCompletion;
@property (nonatomic) char forListenAfterSpeaking;
@property (nonatomic) long long listenAfterSpeakingOriginalRequestSource;
@property (retain, nonatomic) NSUUID *previousTurnIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRequestSource:(long long)a0;
- (char)isAudioAccessoryButtonActivation;
- (char)isFlexibleFollowup;
- (char)isSiriAutoPrompt;
- (char)isVoiceTriggerRequest;
- (void)_configureStreamingDictationForSource:(long long)a0;
- (char)_isTypeToSiriPermittedAndEnabledForRequestOptions;
- (char)displayOnlyModeForErrors;
- (id)initWithRequestSource:(long long)a0 buttonDownTimestamp:(unsigned long long)a1;

@end
