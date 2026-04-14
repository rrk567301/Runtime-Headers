@interface _PASDeviceInfo : NSObject {
    int _lowPowerModeToken;
}

+ (id)sharedInstance;
+ (BOOL)isiPad;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)isLowPowerModeEnabled;
+ (BOOL)isAudioAccessory;
+ (id)deviceUUID;
+ (BOOL)isLowEndHardware;
+ (BOOL)shouldIncludePredictionLogs;
+ (BOOL)isDNUEnabled;
+ (BOOL)isInternalBuild;
+ (BOOL)isBetaBuild;
+ (id)internalDeviceCode;
+ (BOOL)isFaceTimeSupported;

- (id)init;
- (void)dealloc;

@end
