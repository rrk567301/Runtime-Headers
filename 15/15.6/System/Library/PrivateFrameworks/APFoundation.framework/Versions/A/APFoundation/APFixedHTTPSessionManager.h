@class NSMutableDictionary, APUnfairLock;

@interface APFixedHTTPSessionManager : NSObject <APHTTPSessionManagerProtocol>

@property (readonly, nonatomic) APUnfairLock *lock;
@property (readonly, nonatomic) NSMutableDictionary *sessions;
@property (copy, nonatomic) id /* block */ createSessionBlock;

- (id)init;
- (void).cxx_destruct;
- (char)cancelTasksForService:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)invalidateAllServicesAndCancelTasks:(char)a0;
- (char)invalidateService:(id)a0 andCancelTasks:(char)a1;
- (id)sessionForService:(id)a0;
- (id)temporarySessionForService:(id)a0;

@end
