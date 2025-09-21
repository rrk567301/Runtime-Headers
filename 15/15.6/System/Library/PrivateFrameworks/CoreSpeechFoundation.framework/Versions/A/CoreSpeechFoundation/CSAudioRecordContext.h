@class NSString, NSDictionary, NSObject;
@protocol OS_xpc_object;

@interface CSAudioRecordContext : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) char alwaysUseRemoteBuiltInMic;
@property (nonatomic) char isRequestDuringActiveCall;
@property (retain, nonatomic) NSDictionary *activationMetadata;
@property (retain, nonatomic) NSString *turnIdentifier;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (nonatomic) char isRequestFromSpokenNotification;
@property (nonatomic) char isRequestFromTriggerless;
@property (nonatomic) long long speechEvent;

+ (id)defaultContext;
+ (id)contextForBuiltInVoiceTrigger;
+ (id)contextForHearstVoiceTriggerWithDeviceId:(id)a0;
+ (id)contextForJarvisWithDeviceId:(id)a0;
+ (id)contextForOpportuneSpeakerListener;
+ (id)contextForOpportuneSpeakerListenerWithCall;
+ (id)contextForRemoraVoiceTriggerWithDeviceId:(id)a0;
+ (id)contextForVoiceTriggerTraining;
+ (long long)audioTypeForContinuousConversation:(long long)a0;
+ (id)contextForBTLEWithDeviceId:(id)a0;
+ (id)contextForContinuousConversation;
+ (id)contextForContinuousConversationWithRecordRoute:(id)a0 deviceId:(id)a1;
+ (id)contextForDarwinVoiceTriggerWithDeviceId:(id)a0;
+ (id)contextForDictation;
+ (id)contextForHomeButton;
+ (id)contextForRaiseToSpeak;
+ (id)contextForRemoraButtonTriggerWithDeviceId:(id)a0;
+ (id)contextForServerInvoke;
+ (id)recordTypeString:(long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;
- (char)isServerInvoked;
- (id)initWithRecordType:(long long)a0 deviceId:(id)a1;
- (char)isAudioRecordTypeSupportedByContinuousConversation;
- (char)isAudioRecordTypeSupportedByRemora;
- (char)isBuiltInVoiceTriggered;
- (char)isContinuousConversation;
- (char)isDarwinVoiceTriggered;
- (char)isDictation;
- (char)isGibraltarVoiceTriggered;
- (char)isHearstVoiceTriggered;
- (char)isHomePressed;
- (char)isJarvisVoiceTriggered;
- (char)isRTSTriggered;
- (char)isRemoraVoiceTriggered;
- (char)isTVRemote;
- (char)isTriggeredFromHearst;
- (char)isVoiceTriggered;
- (id)avvcContext;
- (id)avvcContextSettings;
- (char)isUIButtonPress;
- (id)_createAVVCContextWithType:(long long)a0 deviceId:(id)a1;
- (long long)avvcActivationMode:(long long)a0;
- (id)initWithAVVCContext:(id)a0;
- (char)isContinuousConversationTriggerlessAnnounce;
- (char)isHearstDoubleTapTriggered;
- (char)isJarvisContinuousConversation;
- (char)isRemoraButtonPress;
- (char)isRemoraTriggered;
- (char)isStarkTriggered;
- (char)isTriggerlessAnnounce;
- (char)isTypeJarvis;
- (char)isVoiceTriggeredFromRemoteXPCDevice;
- (char)isiOSButtonPress;
- (long long)recordTypeFromAVVCActivationMode:(long long)a0;

@end
