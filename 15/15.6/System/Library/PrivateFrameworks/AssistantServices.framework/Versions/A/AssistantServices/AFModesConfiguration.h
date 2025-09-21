@class NSString;

@interface AFModesConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char isEyesFree;
@property (readonly, nonatomic) char isUIFree;
@property (readonly, nonatomic) char isForCarDND;
@property (readonly, nonatomic) char isInAmbient;
@property (readonly, nonatomic) char isMapsNavigationActive;
@property (readonly, nonatomic) char isVoiceTriggerRequest;
@property (readonly, nonatomic) char isConnectedToCarPlay;
@property (readonly, nonatomic) char isRequestMadeWithPhysicalDeviceInteraction;
@property (readonly, nonatomic) char isAudioAccessoryButtonActivation;
@property (readonly, nonatomic) char isSiriAutoPrompt;
@property (readonly, nonatomic) char isFlexibleFollowup;
@property (readonly, nonatomic) char isMediaPlaying;
@property (readonly, nonatomic) char userTypedInSiri;
@property (readonly, copy, nonatomic) NSString *modeOverrideValue;
@property (readonly, nonatomic) char isDeviceUnlocked;
@property (readonly, nonatomic) char isDeviceScreenON;
@property (readonly, nonatomic) char isInPocket;
@property (readonly, nonatomic) char liftToWakeDetected;
@property (readonly, nonatomic) char userInitiatedWakeDetected;
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
@property (readonly, nonatomic) long long isUserEngagedWithDevice;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithIsEyesFree:(char)a0 isUIFree:(char)a1 isForCarDND:(char)a2 isInAmbient:(char)a3 isMapsNavigationActive:(char)a4 isVoiceTriggerRequest:(char)a5 isConnectedToCarPlay:(char)a6 isRequestMadeWithPhysicalDeviceInteraction:(char)a7 isAudioAccessoryButtonActivation:(char)a8 isSiriAutoPrompt:(char)a9 isFlexibleFollowup:(char)a10 isMediaPlaying:(char)a11 userTypedInSiri:(char)a12 modeOverrideValue:(id)a13 isDeviceUnlocked:(char)a14 isDeviceScreenON:(char)a15 isInPocket:(char)a16 liftToWakeDetected:(char)a17 userInitiatedWakeDetected:(char)a18 deviceMotion:(long long)a19 deviceRaised:(long long)a20 faceDetected:(long long)a21 touchScreenDetected:(long long)a22 buttonPressDetected:(long long)a23 flatDevicePosture:(long long)a24 deviceOrientation:(long long)a25 isInWorkout:(long long)a26 isBacklightOn:(long long)a27 isInWaterLock:(long long)a28 isInSleepLock:(long long)a29 isInTheaterMode:(long long)a30 isOnWrist:(long long)a31 isUserEngagedWithDevice:(long long)a32;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
