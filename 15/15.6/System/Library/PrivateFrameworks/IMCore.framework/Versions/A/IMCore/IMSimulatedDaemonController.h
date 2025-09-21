@class NSArray;

@interface IMSimulatedDaemonController : IMDaemonController

@property (retain, nonatomic) NSArray *listeners;

+ (id)sharedInstance;
+ (void)beginSimulatingDaemon;
+ (id)dictionaryForChat:(id)a0;

- (void).cxx_destruct;
- (char)isConnected;
- (unsigned int)capabilitiesForListenerID:(id)a0;
- (char)connectToDaemonWithLaunch:(char)a0;
- (void)sendBalloonPayload:(id)a0 attachments:(id)a1 withMessageGUID:(id)a2 bundleID:(id)a3;
- (char)connectToDaemonWithLaunch:(char)a0 capabilities:(unsigned int)a1 blockUntilConnected:(char)a2;

@end
