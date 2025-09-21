@interface PowerUICECUtilities : NSObject

+ (id)log;
+ (char)deviceWasRestartedWithDefaults:(id)a0;
+ (id)fetchEstimatedCountryCode;
+ (char)isDemoCECSupported;
+ (char)isDemoCecFlagEnabledForStore;
+ (char)isDemoDevice;
+ (char)isPluggedIntoEligiblePowerSourceWithContext:(id)a0;

@end
