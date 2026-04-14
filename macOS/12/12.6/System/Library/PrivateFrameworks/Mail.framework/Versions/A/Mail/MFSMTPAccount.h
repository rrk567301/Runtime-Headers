@class NSTimer, NSOperationQueue, MFSMTPConnection, ECSMTPAccount;

@interface MFSMTPAccount : MFDeliveryAccount {
    MFSMTPConnection *_connection;
    id _smtpAccountLock;
    NSTimer *_timer;
}

@property (readonly, nonatomic) NSOperationQueue *connectionCleanupQueue;
@property (nonatomic) long long lastTimerSetTime;
@property (readonly) ECSMTPAccount *baseAccount;

+ (id)accountTypeString;
+ (id)standardPorts;
+ (id)standardSSLPorts;
+ (id)csAccountTypeString;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)objectSpecifier;
- (void)_setTimer;
- (void)checkInConnection:(id)a0;
- (id)initWithSystemAccount:(id)a0;
- (id)saslProfileName;
- (BOOL)canAuthenticateWithCurrentCredentials;
- (BOOL)_parentSystemAccountDidUpdateProperties:(id)a0 changedSystemAccount:(BOOL *)a1;
- (void)releaseAllConnections;
- (BOOL)connectAndAuthenticate:(id)a0;
- (id)newConnectedConnectionDiscoveringBestSettings:(BOOL)a0 withConnectTimeout:(double)a1 readWriteTimeout:(double)a2;
- (id)authenticatedConnection;
- (id)newDelivererWithMessage:(id)a0;
- (void)_connectionExpired:(id)a0;
- (void)_disconnect:(id)a0;

@end
