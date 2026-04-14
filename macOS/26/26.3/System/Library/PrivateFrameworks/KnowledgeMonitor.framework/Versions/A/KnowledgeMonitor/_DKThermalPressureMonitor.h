@interface _DKThermalPressureMonitor : _DKMonitor

@property (nonatomic) BOOL initialized;
@property (nonatomic) int thermalPressureToken;
@property (nonatomic) int lastThermalPressureLevel;

+ (id)entitlements;
+ (id)eventStream;

- (void)saveState;
- (void)start;
- (void)stop;
- (id)loadState;
- (void)synchronouslyReflectCurrentValue;
- (void)getThermalPressureLevelWithToken:(int)a0;
- (void)dealloc;
- (void)deactivate;
- (void)setCurrentThermalLevel:(int)a0;

@end
