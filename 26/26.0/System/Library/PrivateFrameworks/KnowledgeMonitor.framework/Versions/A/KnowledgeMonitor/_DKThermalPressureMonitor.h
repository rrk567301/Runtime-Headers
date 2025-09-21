@interface _DKThermalPressureMonitor : _DKMonitor

@property (nonatomic) BOOL initialized;
@property (nonatomic) int thermalPressureToken;
@property (nonatomic) int lastThermalPressureLevel;

+ (id)entitlements;
+ (id)eventStream;

- (void)saveState;
- (id)loadState;
- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (void)dealloc;
- (void)stop;
- (void)setCurrentThermalLevel:(int)a0;
- (void)deactivate;
- (void)getThermalPressureLevelWithToken:(int)a0;

@end
