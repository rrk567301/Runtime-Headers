@interface _PASDeviceInfo : NSObject {
    int _lowPowerModeToken;
}

+ (BOOL)isiPad;
+ (id)sharedInstance;
+ (id)deviceUUID;
+ (id)internalDeviceCode;
+ (BOOL)isAudioAccessory;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)isBetaBuild;
+ (BOOL)isLowEndHardware;
+ (BOOL)shouldIncludePredictionLogs;
+ (BOOL)isInternalBuild;
+ (BOOL)isLowPowerModeEnabled;
+ (BOOL)isFaceTimeSupported;
+ (BOOL)isDNUEnabled;

- (id)init;
- (void)dealloc;

@end
