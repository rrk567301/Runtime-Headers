@class NSNumber;

@interface SMDMigrateFrom_XPCClientConnection : SMDXPCClientConnection <SMDMigrateFromProtocol>

@property (retain) NSNumber *trustedPasscode;

+ (id)daemonProtocolInterface;
+ (id)daemonProtocolInterfaceInstance;

- (void)invalidate;
- (void).cxx_destruct;
- (void)start;
- (void)stopServingRemoteMacs;
- (void)acceptTrustedPassCode;
- (void)rejectTrustedPassCode;
- (void)canGenerateValidTXTRecordForSourcePath:(id)a0 reply:(id /* block */)a1;
- (void)startServingRemoteMacsUsingSourcePath:(id)a0 andSecretPassword:(id)a1 reply:(id /* block */)a2;

@end
