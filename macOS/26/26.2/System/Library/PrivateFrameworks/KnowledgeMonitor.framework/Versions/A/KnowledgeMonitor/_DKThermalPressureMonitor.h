@interface _DKThermalPressureMonitor : _DKMonitor

@property (nonatomic) BOOL initialized;
@property (nonatomic) int thermalPressureToken;
@property (nonatomic) int lastThermalPressureLevel;

+ (id)entitlements;
+ (id)eventStream;

- (id)loadState;
- (void)saveState;
- (void)synchronouslyReflectCurrentValue;
- (void)stop;
- (void)getThermalPressureLevelWithToken:(int)a0;
- (void)setCurrentThermalLevel:(int)a0;
- (void)start;
- (void)deactivate;
- (void)dealloc;

@end
