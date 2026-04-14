@interface _PASDeviceInfo : NSObject {
    int _lowPowerModeToken;
}

+ (id)sharedInstance;
+ (BOOL)isInternalBuild;
+ (BOOL)isAudioAccessory;
+ (BOOL)isiPad;
+ (BOOL)isFaceTimeSupported;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)isLowPowerModeEnabled;
+ (BOOL)isBetaBuild;
+ (id)internalDeviceCode;
+ (id)deviceUUID;
+ (BOOL)isLowEndHardware;
+ (BOOL)isDNUEnabled;
+ (BOOL)shouldIncludePredictionLogs;

- (void)dealloc;
- (id)init;

@end
