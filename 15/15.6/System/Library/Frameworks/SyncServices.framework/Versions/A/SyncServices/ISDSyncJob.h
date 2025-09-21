@interface ISDSyncJob : NSObject {
    id _target;
    id _context;
    SEL _selector;
    char _canRunWithRunningSyncPlans;
    char _shouldRunBeforePendingSyncPlans;
    char _isRunning;
}

- (void)dealloc;
- (id)description;
- (void)run;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (char)isRunning;
- (char)shouldRunBeforePendingSyncPlans;
- (char)canRunWithRunningSyncPlans;
- (void)setCanRunWithRunningSyncPlans:(char)a0;
- (void)setJobIsRunning:(char)a0;
- (void)setShouldRunBeforePendingSyncPlans:(char)a0;

@end
