@interface _PASDeviceInfo : NSObject {
    int _lowPowerModeToken;
}

+ (id)sharedInstance;
+ (BOOL)isLowPowerModeEnabled;
+ (id)deviceUUID;
+ (BOOL)isInternalBuild;
+ (BOOL)isiPad;
+ (BOOL)isLowEndHardware;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)isBetaBuild;
+ (BOOL)isAudioAccessory;
+ (BOOL)isFaceTimeSupported;
+ (BOOL)isDNUEnabled;
+ (BOOL)shouldIncludePredictionLogs;
+ (id)internalDeviceCode;

- (void)dealloc;
- (id)init;

@end
