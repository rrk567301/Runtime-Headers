@class NSMutableArray;

@interface WFContextualActionRunQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *runnerClients;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

+ (id)sharedQueue;

- (void).cxx_destruct;
- (id)init;
- (void)enqueueRun:(id)a0;
- (void)runFinished:(id)a0;

@end
