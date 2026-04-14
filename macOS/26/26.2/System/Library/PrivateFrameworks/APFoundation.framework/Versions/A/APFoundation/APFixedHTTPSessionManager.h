@class NSMutableDictionary, APUnfairLock;

@interface APFixedHTTPSessionManager : NSObject <APHTTPSessionManagerProtocol>

@property (readonly, nonatomic) APUnfairLock *lock;
@property (readonly, nonatomic) NSMutableDictionary *sessions;
@property (copy, nonatomic) id /* block */ createSessionBlock;

- (void).cxx_destruct;
- (id)init;
- (BOOL)cancelTasksForService:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)invalidateAllServicesAndCancelTasks:(BOOL)a0;
- (BOOL)invalidateService:(id)a0 andCancelTasks:(BOOL)a1;
- (id)sessionForService:(id)a0;
- (id)temporarySessionForService:(id)a0;

@end
