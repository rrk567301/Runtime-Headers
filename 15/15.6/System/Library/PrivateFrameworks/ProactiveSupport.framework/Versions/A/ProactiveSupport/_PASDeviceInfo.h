@interface _PASDeviceInfo : NSObject {
    int _lowPowerModeToken;
}

+ (id)sharedInstance;
+ (char)isLowPowerModeEnabled;
+ (id)deviceUUID;
+ (char)isInternalBuild;
+ (char)isiPad;
+ (id)internalDeviceCode;
+ (char)isAudioAccessory;
+ (char)isBetaBuild;
+ (char)isDNUEnabled;
+ (char)isDemoModeEnabled;
+ (char)isFaceTimeSupported;
+ (char)isLowEndHardware;
+ (char)shouldIncludePredictionLogs;

- (void)dealloc;
- (id)init;

@end
