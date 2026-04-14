@interface _PASDeviceInfo : NSObject {
    int _lowPowerModeToken;
}

+ (BOOL)isiPad;
+ (BOOL)isInternalBuild;
+ (id)sharedInstance;
+ (id)deviceUUID;
+ (BOOL)isLowEndHardware;
+ (BOOL)isLowPowerModeEnabled;
+ (BOOL)shouldIncludePredictionLogs;
+ (id)internalDeviceCode;
+ (BOOL)isAudioAccessory;
+ (BOOL)isBetaBuild;
+ (BOOL)isFaceTimeSupported;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)isDNUEnabled;

- (id)init;
- (void)dealloc;

@end
