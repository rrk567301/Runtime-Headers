@interface _DKAssertionsPreventingRestartMonitor : _DKMonitor

@property (nonatomic) int userspaceAssertionsToken;
@property (nonatomic) int preventIdleSleepAssertionsToken;
@property (nonatomic) int systemAssertionsToken;
@property (nonatomic) int restartPreventerAssertionsToken;
@property (nonatomic) BOOL lastPreventingRestartAssertionsStatus;

+ (id)entitlements;
+ (id)eventStream;

- (void)saveState;
- (void)start;
- (void)stop;
- (id)loadState;
- (void)synchronouslyReflectCurrentValue;
- (BOOL)areAssertionsPreventingRestart;
- (void)dealloc;
- (void)deactivate;

@end
