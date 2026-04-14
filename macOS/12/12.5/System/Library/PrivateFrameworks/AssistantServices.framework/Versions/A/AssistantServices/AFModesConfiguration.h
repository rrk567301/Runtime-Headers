@class NSString;

@interface AFModesConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL isEyesFree;
@property (readonly, nonatomic) BOOL isForCarDND;
@property (readonly, nonatomic) BOOL isVoiceTriggerRequest;
@property (readonly, nonatomic) BOOL isConnectedToCarPlay;
@property (readonly, nonatomic) BOOL isRequestMadeWithPhysicalDeviceInteraction;
@property (readonly, nonatomic) BOOL userTypedInSiri;
@property (readonly, copy, nonatomic) NSString *modeOverrideValue;
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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (id)initWithIsEyesFree:(BOOL)a0 isForCarDND:(BOOL)a1 isVoiceTriggerRequest:(BOOL)a2 isConnectedToCarPlay:(BOOL)a3 isRequestMadeWithPhysicalDeviceInteraction:(BOOL)a4 userTypedInSiri:(BOOL)a5 modeOverrideValue:(id)a6 deviceRaised:(long long)a7 faceDetected:(long long)a8 touchScreenDetected:(long long)a9 buttonPressDetected:(long long)a10 flatDevicePosture:(long long)a11 deviceOrientation:(long long)a12 isInWorkout:(long long)a13 isBacklightOn:(long long)a14 isInWaterLock:(long long)a15 isInSleepLock:(long long)a16 isInTheaterMode:(long long)a17 isOnWrist:(long long)a18;

@end
