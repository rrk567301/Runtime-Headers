@class NSDate;

@interface ATXActionCriteriaWorldState : NSObject {
    char _fake;
    NSDate *_now;
    struct { unsigned char doNotDisturb : 1; unsigned char telephonyCapability : 1; unsigned char airDropCapability : 1; unsigned char airplaneMode : 1; unsigned char coreRoutineCapability : 1; unsigned char greenTeaDeviceCapability : 1; unsigned char internalBuild : 1; unsigned char lockScreen : 1; } _flags;
    struct { unsigned char now : 1; unsigned char doNotDisturb : 1; unsigned char telephonyCapability : 1; unsigned char airDropCapability : 1; unsigned char airplaneMode : 1; unsigned char coreRoutineCapability : 1; unsigned char greenTeaDeviceCapability : 1; unsigned char internalBuild : 1; unsigned char lockScreen : 1; } _have;
}

@property (copy, nonatomic) NSDate *now;
@property (nonatomic) char doNotDisturb;
@property (nonatomic) char telephonyCapability;
@property (nonatomic) char airDropCapability;
@property (nonatomic) char airplaneMode;
@property (nonatomic) char coreRoutineCapability;
@property (nonatomic) char greenTeaDeviceCapability;
@property (nonatomic) char internalBuild;
@property (nonatomic) char lockScreen;

- (id)init;
- (void).cxx_destruct;
- (id)initFake;
- (id)propertyWhitelist;

@end
