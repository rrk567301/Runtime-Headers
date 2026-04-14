@class IMDaemonController;
@protocol IMRemoteDaemonProtocol;

@interface IMOneTimeCodeAccelerator : NSObject

@property (retain, nonatomic) IMDaemonController<IMRemoteDaemonProtocol> *daemon;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (nonatomic) BOOL requestedOneTimeCodeStatusForConnection;

- (void)dealloc;
- (void).cxx_destruct;
- (void)daemonControllerWillConnect;
- (void)daemonControllerDidDisconnect;
- (void)daemonConnectionLost;
- (void)daemonControllerDidConnect;
- (id)initWithBlockForUpdates:(id /* block */)a0;
- (void)consumeCodeWithGuid:(id)a0;
- (id)initWithDaemon:(id)a0 andBlock:(id /* block */)a1;
- (void)setUpConnectionToDaemaon;
- (void)_incomingCodeUpdateFromDaemon:(id)a0;

@end
