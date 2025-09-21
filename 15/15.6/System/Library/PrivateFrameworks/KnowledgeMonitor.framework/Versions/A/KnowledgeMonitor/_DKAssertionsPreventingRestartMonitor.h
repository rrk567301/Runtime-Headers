@interface _DKAssertionsPreventingRestartMonitor : _DKMonitor

@property (nonatomic) int userspaceAssertionsToken;
@property (nonatomic) int preventIdleSleepAssertionsToken;
@property (nonatomic) int systemAssertionsToken;
@property (nonatomic) int restartPreventerAssertionsToken;
@property (nonatomic) char lastPreventingRestartAssertionsStatus;

+ (id)entitlements;
+ (id)eventStream;

- (void)dealloc;
- (void)start;
- (void)stop;
- (void)deactivate;
- (void)synchronouslyReflectCurrentValue;
- (id)loadState;
- (void)saveState;
- (char)areAssertionsPreventingRestart;

@end
