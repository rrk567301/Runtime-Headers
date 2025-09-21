@class NSMapTable, NSMutableArray, APUnfairLock;

@interface APFlexibleHTTPSessionManager : NSObject <APHTTPSessionManagerProtocol>

@property (readonly, nonatomic) APUnfairLock *lock;
@property (readonly, nonatomic) NSMutableArray *sessions;
@property (readonly, nonatomic) NSMapTable *weakSessions;
@property (nonatomic) char timerSet;
@property (nonatomic) double lookBackWindow;
@property (nonatomic) long long httpMaximumConnectionsPerHost;
@property (nonatomic) long long httpMaximumConnectionsPerHostTempSession;
@property (copy, nonatomic) id /* block */ createSessionBlock;

- (void).cxx_destruct;
- (void)_setTimer;
- (void)_startTimer;
- (id)_createNewSessionForService:(id)a0 temp:(char)a1;
- (void)_onTimer:(double)a0;
- (id)_sessionForService:(id)a0 now:(double)a1 temporarySession:(char)a2;
- (char)cancelTasksForService:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)initWithLookBackWindow:(double)a0 httpMaximumConnectionsPerHost:(long long)a1 httpMaximumConnectionsPerHostTempSession:(long long)a2;
- (void)invalidateAllServicesAndCancelTasks:(char)a0;
- (char)invalidateService:(id)a0 andCancelTasks:(char)a1;
- (id)sessionForService:(id)a0;
- (id)temporarySessionForService:(id)a0;

@end
