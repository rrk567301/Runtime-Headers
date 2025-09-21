@interface PXMediaProviderSettings : PXSettings

@property (nonatomic) char wantsSimulation;
@property (nonatomic) char simulateError;
@property (nonatomic) double simulatedDelay;

+ (id)sharedInstance;
+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (id)parentSettings;

@end
