@class NSString, NSDictionary, NSObject;
@protocol OS_xpc_object;

@interface CSAudioRecordContext : NSObject <NSCopying>

@property (nonatomic) long long type;
@property (retain, nonatomic) NSString *deviceId;
@property (nonatomic) BOOL alwaysUseRemoteBuiltInMic;
@property (nonatomic) BOOL isRequestDuringActiveCall;
@property (retain, nonatomic) NSDictionary *triggerEventInfo;
@property (retain, nonatomic) NSString *turnIdentifier;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpcObject;
@property (nonatomic) BOOL isRequestFromSpokenNotification;

+ (id)defaultContext;
+ (id)contextForRemoraVoiceTriggerWithDeviceId:(id)a0;
+ (id)contextForHearstVoiceTriggerWithDeviceId:(id)a0;
+ (id)contextForOpportuneSpeakerListener;
+ (id)contextForOpportuneSpeakerListenerWithCall;
+ (id)contextForJarvisWithDeviceId:(id)a0;
+ (id)contextForBuiltInVoiceTrigger;
+ (id)contextForVoiceTriggerTraining;
+ (id)contextForServerInvoke;
+ (id)recordTypeString:(long long)a0;
+ (id)contextForRemoraButtonTriggerWithDeviceId:(id)a0;
+ (id)contextForBTLEWithDeviceId:(id)a0;
+ (id)contextForHomeButton;
+ (id)contextForDictation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithXPCObject:(id)a0;
- (id)avvcContext;
- (BOOL)isRTSTriggered;
- (BOOL)isHearstVoiceTriggered;
- (BOOL)isBuiltInVoiceTriggered;
- (BOOL)isVoiceTriggered;
- (BOOL)isTriggeredFromHearst;
- (BOOL)isServerInvoked;
- (BOOL)isHomePressed;
- (BOOL)isTVRemote;
- (BOOL)isDictation;
- (BOOL)isAudioRecordTypeSupportedByRemora;
- (BOOL)isJarvisVoiceTriggered;
- (BOOL)isRemoraVoiceTriggered;
- (BOOL)isStarkTriggered;
- (id)initWithRecordType:(long long)a0 deviceId:(id)a1;
- (long long)recordTypeFromAVVCActivationMode:(long long)a0;
- (id)_createAVVCContextWithType:(long long)a0 deviceId:(id)a1;
- (long long)avvcActivationMode:(long long)a0;
- (BOOL)isGibraltarVoiceTriggered;
- (BOOL)isHearstDoubleTapTriggered;
- (id)initWithAVVCContext:(id)a0;
- (BOOL)isVoiceTriggeredFromRemoteXPCDevice;
- (BOOL)isiOSButtonPress;
- (BOOL)isUIButtonPress;

@end
