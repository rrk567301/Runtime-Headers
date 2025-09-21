@class NSArray;

@interface IMSimulatedDaemonController : IMDaemonController

@property (retain, nonatomic) NSArray *listeners;

+ (id)sharedInstance;
+ (id)sharedController;
+ (void)beginSimulatingDaemon;
+ (id)dictionaryForChat:(id)a0;

- (BOOL)isConnected;
- (void)forwardInvocation:(id)a0;
- (unsigned int)capabilitiesForListenerID:(id)a0;
- (BOOL)connectToDaemonWithLaunch:(BOOL)a0;
- (void).cxx_destruct;
- (void)sendBalloonPayload:(id)a0 attachments:(id)a1 withMessageGUID:(id)a2 bundleID:(id)a3;
- (BOOL)connectToDaemonWithLaunch:(BOOL)a0 capabilities:(unsigned int)a1 blockUntilConnected:(BOOL)a2;
- (id)remoteDaemon;
- (id)synchronousRemoteDaemon;

@end
