@class NSMutableArray, NSError, NSLock, GKJoinGroup;

@interface GKJoinGroupNotifier : NSObject

@property (weak, nonatomic) GKJoinGroup *group;
@property (retain) NSLock *lock;
@property (retain, nonatomic) NSMutableArray *updateQueue;
@property (retain) NSError *error;

- (id)retain;
- (oneway void)release;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)setResult:(id /* block */)a0 error:(id)a1;

@end
