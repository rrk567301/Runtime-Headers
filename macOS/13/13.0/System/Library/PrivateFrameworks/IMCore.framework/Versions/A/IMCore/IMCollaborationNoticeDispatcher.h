@class IMDaemonController;
@protocol IMDaemonProtocol;

@interface IMCollaborationNoticeDispatcher : NSObject

@property (retain, nonatomic) IMDaemonController<IMDaemonProtocol> *daemon;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_listenerID;
- (id)initWithDaemon:(id)a0;
- (void)daemonControllerDidDisconnect;
- (void)daemonConnectionLost;
- (void)disconnectFromDaemon;
- (void)sendNotice:(id)a0 toHandles:(id)a1 completion:(id /* block */)a2;
- (void)sendClearNotice:(id)a0 toHandles:(id)a1 completion:(id /* block */)a2;
- (void)setUpConnectionToDaemon;

@end
