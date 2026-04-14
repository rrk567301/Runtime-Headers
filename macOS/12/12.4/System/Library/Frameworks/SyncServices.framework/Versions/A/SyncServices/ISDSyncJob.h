@interface ISDSyncJob : NSObject {
    id _target;
    id _context;
    SEL _selector;
    BOOL _canRunWithRunningSyncPlans;
    BOOL _shouldRunBeforePendingSyncPlans;
    BOOL _isRunning;
}

- (void)run;
- (void)dealloc;
- (id)description;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 object:(id)a2;
- (BOOL)isRunning;
- (void)setCanRunWithRunningSyncPlans:(BOOL)a0;
- (void)setShouldRunBeforePendingSyncPlans:(BOOL)a0;
- (BOOL)canRunWithRunningSyncPlans;
- (BOOL)shouldRunBeforePendingSyncPlans;
- (void)setJobIsRunning:(BOOL)a0;

@end
