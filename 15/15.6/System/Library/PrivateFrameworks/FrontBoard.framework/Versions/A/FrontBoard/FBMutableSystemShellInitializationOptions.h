@class NSString;

@interface FBMutableSystemShellInitializationOptions : FBSystemShellInitializationOptions

@property (nonatomic) char initializeReadyForInteraction;
@property (nonatomic) char resetDarkBootState;
@property (nonatomic) char shouldWaitForMigrator;
@property (nonatomic) double systemSleepInterval;
@property (copy, nonatomic) id /* block */ registerAdditionalServicesBlock;
@property (nonatomic) char initializeDisplayManager;
@property (copy, nonatomic) NSString *independentWatchdogPortName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setIndependentWatchdogPortName:(id)a0;
- (void)setInitializeDisplayManager:(char)a0;
- (void)setInitializeReadyForInteraction:(char)a0;
- (void)setRegisterAdditionalServicesBlock:(id /* block */)a0;
- (void)setResetDarkBootState:(char)a0;
- (void)setShouldWaitForMigrator:(char)a0;
- (void)setSystemSleepInterval:(double)a0;

@end
