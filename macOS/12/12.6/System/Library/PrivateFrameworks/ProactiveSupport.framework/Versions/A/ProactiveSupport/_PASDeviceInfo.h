@interface _PASDeviceInfo : NSObject {
    int _lowPowerModeToken;
}

+ (id)sharedInstance;
+ (BOOL)isLowPowerModeEnabled;
+ (id)deviceUUID;
+ (BOOL)isInternalBuild;
+ (BOOL)isiPad;
+ (BOOL)isBetaBuild;
+ (BOOL)isLowEndHardware;
+ (BOOL)isDemoModeEnabled;
+ (BOOL)isAudioAccessory;
+ (BOOL)isDNUEnabled;
+ (BOOL)shouldIncludePredictionLogs;

- (void)dealloc;
- (id)init;

@end
