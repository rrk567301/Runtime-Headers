@interface _DKAssertionsPreventingRestartMonitor : _DKMonitor

@property (nonatomic) int userspaceAssertionsToken;
@property (nonatomic) int preventIdleSleepAssertionsToken;
@property (nonatomic) int systemAssertionsToken;
@property (nonatomic) int restartPreventerAssertionsToken;
@property (nonatomic) BOOL lastPreventingRestartAssertionsStatus;

+ (id)eventStream;
+ (id)entitlements;

- (void)stop;
- (void)synchronouslyReflectCurrentValue;
- (void)saveState;
- (id)loadState;
- (void)deactivate;
- (BOOL)areAssertionsPreventingRestart;
- (void)start;
- (void)dealloc;

@end
