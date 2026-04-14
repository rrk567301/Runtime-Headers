@interface PowerUICECUtilities : NSObject

+ (BOOL)isDemoDevice;
+ (id)log;
+ (BOOL)deviceWasRestartedWithDefaults:(id)a0;
+ (id)fetchEstimatedCountryCode;
+ (BOOL)isDemoCECSupported;
+ (BOOL)isDemoCecFlagEnabledForStore;
+ (BOOL)isPluggedIntoEligiblePowerSourceWithContext:(id)a0;
+ (BOOL)resetStateOnUnplug;

@end
