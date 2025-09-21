@interface ISDSyncJob : NSObject {
    id _target;
    id _context;
    SEL _selector;
    BOOL _canRunWithRunningSyncPlans;
    BOOL _shouldRunBeforePendingSyncPlans;
    BOOL _isRunning;
}

- (void)dealloc;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (void)run;
- (BOOL)isRunning;
- (id)description;
- (BOOL)shouldRunBeforePendingSyncPlans;
- (BOOL)canRunWithRunningSyncPlans;
- (void)setCanRunWithRunningSyncPlans:(BOOL)a0;
- (void)setJobIsRunning:(BOOL)a0;
- (void)setShouldRunBeforePendingSyncPlans:(BOOL)a0;

@end
