@class NSString, NSDictionary, NSObject;
@protocol OS_xpc_object;

@interface CSAudioRecordContext : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) BOOL alwaysUseRemoteBuiltInMic;
@property (nonatomic) BOOL isRequestDuringActiveCall;
@property (retain, nonatomic) NSDictionary *activationMetadata;
@property (retain, nonatomic) NSString *turnIdentifier;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (nonatomic) BOOL isRequestFromSpokenNotification;

+ (id)defaultContext;
+ (id)contextForBuiltInVoiceTrigger;
+ (id)contextForHearstVoiceTriggerWithDeviceId:(id)a0;
+ (id)contextForJarvisWithDeviceId:(id)a0;
+ (id)contextForOpportuneSpeakerListener;
+ (id)contextForOpportuneSpeakerListenerWithCall;
+ (id)contextForRemoraVoiceTriggerWithDeviceId:(id)a0;
+ (id)contextForVoiceTriggerTraining;
+ (id)contextForRemoraButtonTriggerWithDeviceId:(id)a0;
+ (id)contextForBTLEWithDeviceId:(id)a0;
+ (id)contextForServerInvoke;
+ (id)contextForHomeButton;
+ (id)contextForDarwinVoiceTriggerWithDeviceId:(id)a0;
+ (id)contextForDictation;
+ (id)recordTypeString:(long long)a0;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;
- (id)initWithRecordType:(long long)a0 deviceId:(id)a1;
- (BOOL)isRemoraVoiceTriggered;
- (BOOL)isServerInvoked;
- (id)avvcContext;
- (BOOL)isStarkTriggered;
- (BOOL)isTVRemote;
- (BOOL)isTriggeredFromHearst;
- (BOOL)isVoiceTriggered;
- (BOOL)isAudioRecordTypeSupportedByRemora;
- (BOOL)isBuiltInVoiceTriggered;
- (BOOL)isDarwinVoiceTriggered;
- (BOOL)isHearstVoiceTriggered;
- (BOOL)isHomePressed;
- (BOOL)isJarvisVoiceTriggered;
- (BOOL)isRTSTriggered;
- (BOOL)isDictation;
- (id)initWithAVVCContext:(id)a0;
- (id)_createAVVCContextWithType:(long long)a0 deviceId:(id)a1;
- (BOOL)isVoiceTriggeredFromRemoteXPCDevice;
- (BOOL)isGibraltarVoiceTriggered;
- (BOOL)isHearstDoubleTapTriggered;
- (BOOL)isRemoraTriggered;
- (BOOL)isRemoraButtonPress;
- (BOOL)isiOSButtonPress;
- (BOOL)isUIButtonPress;
- (long long)recordTypeFromAVVCActivationMode:(long long)a0;
- (long long)avvcActivationMode:(long long)a0;

@end
