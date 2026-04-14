@protocol IMDaemonMultiplexedConnectionManaging;

@interface IMCollaborationNoticeDispatcher : NSObject

@property (retain, nonatomic) id<IMDaemonMultiplexedConnectionManaging> daemonConnection;

- (void).cxx_destruct;
- (id)init;
- (void)disconnectFromDaemon;
- (void)dealloc;
- (id)_bestSendingHandle;
- (void)sendClearNotice:(id)a0 toHandles:(id)a1 completion:(id /* block */)a2;
- (void)sendNotice:(id)a0 toHandles:(id)a1 completion:(id /* block */)a2;
- (void)setUpConnectionToDaemon;

@end
