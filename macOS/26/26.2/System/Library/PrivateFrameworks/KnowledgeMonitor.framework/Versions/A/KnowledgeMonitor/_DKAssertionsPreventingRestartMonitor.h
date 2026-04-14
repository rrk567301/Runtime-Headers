@interface _DKAssertionsPreventingRestartMonitor : _DKMonitor

@property (nonatomic) int userspaceAssertionsToken;
@property (nonatomic) int preventIdleSleepAssertionsToken;
@property (nonatomic) int systemAssertionsToken;
@property (nonatomic) int restartPreventerAssertionsToken;
@property (nonatomic) BOOL lastPreventingRestartAssertionsStatus;

+ (id)entitlements;
+ (id)eventStream;

- (id)loadState;
- (void)saveState;
- (void)synchronouslyReflectCurrentValue;
- (void)stop;
- (void)start;
- (BOOL)areAssertionsPreventingRestart;
- (void)deactivate;
- (void)dealloc;

@end
