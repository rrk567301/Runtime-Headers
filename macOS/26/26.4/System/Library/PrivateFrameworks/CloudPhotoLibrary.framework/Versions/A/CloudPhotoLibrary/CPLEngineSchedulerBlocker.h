@class NSString, CPLEngineScheduler;

@interface CPLEngineSchedulerBlocker : NSObject {
    BOOL _blocking;
}

@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) CPLEngineScheduler *scheduler;

- (void).cxx_destruct;
- (void)unblock;
- (void)dealloc;
- (id)initWithReason:(id)a0 scheduler:(id)a1;

@end
