@class NSString;

@interface AFModesConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEyesFree;
@property (readonly, nonatomic) BOOL isUIFree;
@property (readonly, nonatomic) BOOL isForCarDND;
@property (readonly, nonatomic) BOOL isInAmbient;
@property (readonly, nonatomic) BOOL isMapsNavigationActive;
@property (readonly, nonatomic) BOOL isVoiceTriggerRequest;
@property (readonly, nonatomic) BOOL isConnectedToCarPlay;
@property (readonly, nonatomic) BOOL isRequestMadeWithPhysicalDeviceInteraction;
@property (readonly, nonatomic) BOOL isAudioAccessoryButtonActivation;
@property (readonly, nonatomic) BOOL isSiriAutoPrompt;
@property (readonly, nonatomic) BOOL isFlexibleFollowup;
@property (readonly, nonatomic) BOOL userTypedInSiri;
@property (readonly, copy, nonatomic) NSString *modeOverrideValue;
@property (readonly, nonatomic) BOOL isDeviceUnlocked;
@property (readonly, nonatomic) BOOL isDeviceScreenON;
@property (readonly, nonatomic) BOOL isInitialBringUp;
@property (readonly, nonatomic) long long isUserEngagedWithDevice;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)init;
- (id)initWithBuilder:(id /* block */)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithIsEyesFree:(BOOL)a0 isUIFree:(BOOL)a1 isForCarDND:(BOOL)a2 isInAmbient:(BOOL)a3 isMapsNavigationActive:(BOOL)a4 isVoiceTriggerRequest:(BOOL)a5 isConnectedToCarPlay:(BOOL)a6 isRequestMadeWithPhysicalDeviceInteraction:(BOOL)a7 isAudioAccessoryButtonActivation:(BOOL)a8 isSiriAutoPrompt:(BOOL)a9 isFlexibleFollowup:(BOOL)a10 userTypedInSiri:(BOOL)a11 modeOverrideValue:(id)a12 isDeviceUnlocked:(BOOL)a13 isDeviceScreenON:(BOOL)a14 isInitialBringUp:(BOOL)a15 isUserEngagedWithDevice:(long long)a16;

@end
