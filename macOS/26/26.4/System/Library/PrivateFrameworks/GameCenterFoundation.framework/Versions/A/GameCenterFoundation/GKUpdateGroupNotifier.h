@class NSMutableArray, NSError, NSLock, GKUpdateGroup;

@interface GKUpdateGroupNotifier : NSObject

@property (weak, nonatomic) GKUpdateGroup *group;
@property (retain) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *updateQueue;
@property (retain) NSError *error;

- (void).cxx_destruct;
- (id)retain;
- (id)init;
- (oneway void)release;
- (void)dealloc;
- (void)addUpdate:(id /* block */)a0 error:(id)a1;
- (void)addUpdatesFromGroup:(id)a0;
- (void)updateError:(id)a0;

@end
