@interface _PASDeviceInfo : NSObject {
    int _lowPowerModeToken;
}

+ (id)sharedInstance;
+ (BOOL)isiPad;
+ (BOOL)isInternalBuild;
+ (BOOL)shouldIncludePredictionLogs;
+ (BOOL)isLowPowerModeEnabled;
+ (id)deviceUUID;
+ (BOOL)isFaceTimeSupported;
+ (BOOL)isBetaBuild;
+ (id)internalDeviceCode;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)isDNUEnabled;
+ (BOOL)isLowEndHardware;
+ (BOOL)isAudioAccessory;

- (void)dealloc;
- (id)init;

@end
