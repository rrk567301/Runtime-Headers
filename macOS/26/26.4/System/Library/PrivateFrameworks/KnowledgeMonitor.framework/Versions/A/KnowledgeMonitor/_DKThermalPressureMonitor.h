@interface _DKThermalPressureMonitor : _DKMonitor

@property (nonatomic) BOOL initialized;
@property (nonatomic) int thermalPressureToken;
@property (nonatomic) int lastThermalPressureLevel;

+ (id)eventStream;
+ (id)entitlements;

- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)saveState;
- (id)loadState;
- (void)deactivate;
- (void)start;
- (void)getThermalPressureLevelWithToken:(int)a0;
- (void)dealloc;
- (void)setCurrentThermalLevel:(int)a0;

@end
