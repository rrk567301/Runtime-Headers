@interface _DKThermalPressureMonitor : _DKMonitor

@property (nonatomic) BOOL initialized;
@property (nonatomic) int thermalPressureToken;
@property (nonatomic) int lastThermalPressureLevel;

+ (id)entitlements;
+ (id)eventStream;

- (id)loadState;
- (void)saveState;
- (void)getThermalPressureLevelWithToken:(int)a0;
- (void)start;
- (void)synchronouslyReflectCurrentValue;
- (void)deactivate;
- (void)setCurrentThermalLevel:(int)a0;
- (void)dealloc;
- (void)stop;

@end
