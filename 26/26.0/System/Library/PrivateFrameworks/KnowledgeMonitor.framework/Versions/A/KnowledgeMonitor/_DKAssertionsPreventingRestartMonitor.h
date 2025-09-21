@interface _DKAssertionsPreventingRestartMonitor : _DKMonitor

@property (nonatomic) int userspaceAssertionsToken;
@property (nonatomic) int preventIdleSleepAssertionsToken;
@property (nonatomic) int systemAssertionsToken;
@property (nonatomic) int restartPreventerAssertionsToken;
@property (nonatomic) BOOL lastPreventingRestartAssertionsStatus;

+ (id)entitlements;
+ (id)eventStream;

- (void)saveState;
- (id)loadState;
- (void)synchronouslyReflectCurrentValue;
- (void)start;
- (void)dealloc;
- (void)stop;
- (BOOL)areAssertionsPreventingRestart;
- (void)deactivate;

@end
