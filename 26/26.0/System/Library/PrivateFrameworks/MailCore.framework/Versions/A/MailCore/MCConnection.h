@class NSDate, NSData, NSArray, NSFileHandle, MCSocket, NSString, ECSASLClient, NSObject;
@protocol OS_os_log, MCAccount;

@interface MCConnection : NSObject <EFLoggable, MCConnectionLogging> {
    id _accountLock;
    id<MCAccount> _account;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (nonatomic) void *buffer;
@property (nonatomic) long long bufferRemainingBytes;
@property (nonatomic) unsigned long long bufferStart;
@property (nonatomic) unsigned long long bufferLength;
@property (retain, nonatomic) NSData *logHeader;
@property (retain, nonatomic) ECSASLClient *saslClient;
@property (retain) NSFileHandle *logFile;
@property (nonatomic) unsigned long long totalBytesRead;
@property (retain, nonatomic) MCSocket *socket;
@property (readonly, nonatomic) BOOL supportsPlainTextSchemes;
@property (nonatomic) double connectTimeout;
@property (nonatomic) double readWriteTimeout;
@property (weak) id<MCAccount> account;
@property BOOL isBackground;
@property (readonly, nonatomic) BOOL isExpensive;
@property (readonly, nonatomic) unsigned int cipherKeyLength;
@property (readonly, copy, nonatomic) NSArray *authenticationMechanisms;
@property (readonly, nonatomic) BOOL hasBytesAvailable;
@property (retain, nonatomic) NSDate *readTimestamp;
@property (readonly, nonatomic) BOOL isNonAppInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)_defaultsToBackground;
+ (id)loggingDelegate;
+ (id)logActivityOnHosts;
+ (id)logActivityOnPorts;
+ (BOOL)logActivityToFile;
+ (BOOL)logAllSocketActivity;
+ (void)setLogActivityOnHosts:(id)a0;
+ (void)setLogActivityOnPorts:(id)a0;
+ (void)setLogActivityToFile:(BOOL)a0;
+ (void)setLogAllSocketActivity:(BOOL)a0;
+ (void)setLoggingDelegate:(id)a0;
+ (BOOL)shouldLogActivityForHost:(id)a0 port:(long long)a1;

- (void)disconnect;
- (BOOL)authenticate;
- (void)dealloc;
- (void)quit;
- (id)init;
- (BOOL)connectDiscoveringBestSettings:(BOOL)a0;
- (BOOL)_completeConnectionWithResult:(BOOL)a0;
- (BOOL)_authenticateWithSASLClient:(id)a0;
- (BOOL)_startTLS;
- (void)_setupConnection;
- (void).cxx_destruct;
- (void)logData:(id)a0;
- (void)logString:(id)a0;
- (BOOL)_fillBuffer:(id *)a0;
- (void)flushLog;
- (id)_authenticateWithNonPlainTextSchemes;
- (id)_authenticateWithPlainTextSchemes;
- (BOOL)_readLineIntoData:(id)a0 error:(id *)a1;
- (void)_setupConnectionErrorForMonitorWithPort:(long long)a0 usingSSL:(BOOL)a1 serverTrust:(struct __SecTrust { } *)a2;
- (BOOL)_writeData:(id)a0 dontLogBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 error:(id *)a2;
- (void)discoverAccountSettings;
- (BOOL)isValidAllowNetworking:(BOOL)a0;
- (BOOL)_readBytesIntoData:(id)a0 desiredLength:(long long)a1 error:(id *)a2;
- (void)test_setSocket:(id)a0;
- (id)_adjustedSSLErrorWithHostname:(id)a0 serverTrust:(struct __SecTrust { } *)a1;
- (BOOL)_authenticateWithAuthenticationMechanisms:(id)a0 allowPlainText:(BOOL)a1;
- (void)_clearBuffer;
- (BOOL)_isSSLError:(id)a0;
- (void)_logEventWithPrefix:(const char *)a0 bytes:(const void *)a1 length:(unsigned long long)a2 maskStartIndex:(unsigned long long)a3 maskLength:(unsigned long long)a4;
- (void)_logToFileDidChange:(id)a0;
- (void)_loggingDidChange:(id)a0;
- (id)_newConnectionAttemptsConfigureDynamically:(BOOL)a0;
- (long long)_readBytesFromSocketIntoBuffer:(void *)a0 amount:(unsigned long long)a1 requireAllBytes:(BOOL)a2 error:(id *)a3;
- (void)_resetLogHeaderWithPort:(long long)a0;
- (void)_setupReadErrorForMonitor;
- (void)_setupSocketWithSecurityLayer:(long long)a0 disableEphemeralDiffieHellmanCiphers:(BOOL)a1 connectTimeout:(double)a2;
- (void)_setupWriteErrorForMonitor;
- (BOOL)_shouldKeepTryingAfterProcessingAuthenticationFailureAllowingReconnect:(BOOL)a0 bestError:(id *)a1;
- (void)logBytes:(void *)a0 length:(unsigned long long)a1;
- (void)logData:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)renewCredentialsIfNeededForAccount:(id)a0;

@end
