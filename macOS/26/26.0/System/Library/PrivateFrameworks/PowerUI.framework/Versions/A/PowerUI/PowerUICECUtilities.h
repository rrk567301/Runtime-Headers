@interface PowerUICECUtilities : NSObject

+ (id)log;
+ (BOOL)isDemoDevice;
+ (BOOL)deviceWasRestartedWithDefaults:(id)a0;
+ (id)fetchEstimatedCountryCode;
+ (BOOL)isDemoCECSupported;
+ (BOOL)isDemoCecFlagEnabledForStore;
+ (BOOL)isPluggedIntoEligiblePowerSourceWithContext:(id)a0;
+ (BOOL)resetStateOnUnplug;

@end
