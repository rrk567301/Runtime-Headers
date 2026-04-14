@class NSString;

@interface AFModesConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEyesFree;
@property (readonly, nonatomic) BOOL isUIFree;
@property (readonly, nonatomic) BOOL isForCarDND;
@property (readonly, nonatomic) BOOL isMapsNavigationActive;
@property (readonly, nonatomic) BOOL isVoiceTriggerRequest;
@property (readonly, nonatomic) BOOL isConnectedToCarPlay;
@property (readonly, nonatomic) BOOL isRequestMadeWithPhysicalDeviceInteraction;
@property (readonly, nonatomic) BOOL isSiriAutoPrompt;
@property (readonly, nonatomic) BOOL isMediaPlaying;
@property (readonly, nonatomic) BOOL userTypedInSiri;
@property (readonly, copy, nonatomic) NSString *modeOverrideValue;
@property (readonly, nonatomic) BOOL isDeviceScreenON;
@property (readonly, nonatomic) BOOL liftToWakeDetected;
@property (readonly, nonatomic) BOOL userInitiatedWakeDetected;
@property (readonly, nonatomic) long long deviceMotion;
@property (readonly, nonatomic) long long deviceRaised;
@property (readonly, nonatomic) long long faceDetected;
@property (readonly, nonatomic) long long touchScreenDetected;
@property (readonly, nonatomic) long long buttonPressDetected;
@property (readonly, nonatomic) long long flatDevicePosture;
@property (readonly, nonatomic) long long deviceOrientation;
@property (readonly, nonatomic) long long isInWorkout;
@property (readonly, nonatomic) long long isBacklightOn;
@property (readonly, nonatomic) long long isInWaterLock;
@property (readonly, nonatomic) long long isInSleepLock;
@property (readonly, nonatomic) long long isInTheaterMode;
@property (readonly, nonatomic) long long isOnWrist;

+ (id)newWithBuilder:(id /* block */)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithIsEyesFree:(BOOL)a0 isUIFree:(BOOL)a1 isForCarDND:(BOOL)a2 isMapsNavigationActive:(BOOL)a3 isVoiceTriggerRequest:(BOOL)a4 isConnectedToCarPlay:(BOOL)a5 isRequestMadeWithPhysicalDeviceInteraction:(BOOL)a6 isSiriAutoPrompt:(BOOL)a7 isMediaPlaying:(BOOL)a8 userTypedInSiri:(BOOL)a9 modeOverrideValue:(id)a10 isDeviceScreenON:(BOOL)a11 liftToWakeDetected:(BOOL)a12 userInitiatedWakeDetected:(BOOL)a13 deviceMotion:(long long)a14 deviceRaised:(long long)a15 faceDetected:(long long)a16 touchScreenDetected:(long long)a17 buttonPressDetected:(long long)a18 flatDevicePosture:(long long)a19 deviceOrientation:(long long)a20 isInWorkout:(long long)a21 isBacklightOn:(long long)a22 isInWaterLock:(long long)a23 isInSleepLock:(long long)a24 isInTheaterMode:(long long)a25 isOnWrist:(long long)a26;

@end
