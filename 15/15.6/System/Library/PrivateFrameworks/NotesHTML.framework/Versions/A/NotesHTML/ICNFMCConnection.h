@class NSArray, ICNFMCSaslClient, NSData, NSFileHandle, ICNFMCSocket, NSString;
@protocol ICNFMCAccount;

@interface ICNFMCConnection : NSObject <ICNFMCConnectionLogging> {
    id _accountLock;
    id<ICNFMCAccount> _account;
}

@property (nonatomic) void *buffer;
@property (nonatomic) long long bufferRemainingBytes;
@property (nonatomic) unsigned long long bufferStart;
@property (nonatomic) unsigned long long bufferLength;
@property (retain, nonatomic) NSData *logHeader;
@property (retain, nonatomic) ICNFMCSaslClient *saslClient;
@property (retain) NSFileHandle *logFile;
@property (retain, nonatomic) ICNFMCSocket *socket;
@property (readonly, nonatomic) char hasBytesAvailable;
@property (readonly, nonatomic) char supportsPlainTextSchemes;
@property (nonatomic) double connectTimeout;
@property (nonatomic) double readWriteTimeout;
@property (weak) id<ICNFMCAccount> account;
@property char isBackground;
@property (readonly, nonatomic) char isExpensive;
@property (readonly, nonatomic) unsigned int cipherKeyLength;
@property (readonly, copy, nonatomic) NSArray *authenticationMechanisms;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (char)_defaultsToBackground;
+ (id)loggingDelegate;
+ (id)logActivityOnHosts;
+ (id)logActivityOnPorts;
+ (char)logActivityToFile;
+ (char)logAllSocketActivity;
+ (void)setLogActivityOnHosts:(id)a0;
+ (void)setLogActivityOnPorts:(id)a0;
+ (void)setLogActivityToFile:(char)a0;
+ (void)setLogAllSocketActivity:(char)a0;
+ (void)setLoggingDelegate:(id)a0;
+ (char)shouldLogActivityForHost:(id)a0 port:(long long)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)disconnect;
- (void)quit;
- (void)_setupConnection;
- (void)logData:(id)a0;
- (void)logString:(id)a0;
- (char)authenticate;
- (char)_fillBuffer:(id *)a0;
- (void)flushLog;
- (char)connectDiscoveringBestSettings:(char)a0;
- (id)_authenticateWithNonPlainTextSchemes;
- (id)_authenticateWithPlainTextSchemes;
- (char)_completeConnectionWithResult:(char)a0;
- (char)_readLineIntoData:(id)a0 error:(id *)a1;
- (char)_startTLS;
- (char)_writeData:(id)a0 dontLogBytesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 error:(id *)a2;
- (void)discoverAccountSettings;
- (char)isValidAllowNetworking:(char)a0;
- (char)_readBytesIntoData:(id)a0 desiredLength:(long long)a1 error:(id *)a2;
- (char)_authenticateWithAuthenticationMechanisms:(id)a0 allowPlainText:(char)a1;
- (char)_isSSLError:(id)a0;
- (void)_logEventWithPrefix:(const char *)a0 bytes:(const void *)a1 length:(unsigned long long)a2 maskStartIndex:(unsigned long long)a3 maskLength:(unsigned long long)a4;
- (void)_logToFileDidChange:(id)a0;
- (void)_loggingDidChange:(id)a0;
- (id)_newConnectionAttemptsConfigureDynamically:(char)a0;
- (long long)_readBytesFromSocketIntoBuffer:(void *)a0 amount:(unsigned long long)a1 requireAllBytes:(char)a2 error:(id *)a3;
- (void)_resetLogHeaderWithPort:(long long)a0;
- (void)_setupReadErrorForMonitor;
- (void)_setupWriteErrorForMonitor;
- (void)logBytes:(void *)a0 length:(unsigned long long)a1;
- (void)logData:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (char)_authenticateWithSaslClient:(id)a0;
- (void)_setupConnectionErrorForMonitorWithPort:(long long)a0 usingSSL:(char)a1;
- (void)_setupSSLErrorForMonitorWithHostname:(id)a0;
- (void)_setupSocketWithSecurityLayer:(long long)a0;
- (char)_shouldKeepTryingAfterAuthenticationFailure:(id *)a0;

@end
