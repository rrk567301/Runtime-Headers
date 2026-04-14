@class NSXPCConnection, NSNumber, NSXPCInterface;
@protocol SMDMigrateFromProtocol;

@interface SMMigrationFrom_Client : NSObject <MigrationPairingEventsListener>

@property (retain) NSXPCInterface *daemonInterface;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) NSXPCConnection *daemonConnection;
@property (retain) id<SMDMigrateFromProtocol> daemonProxy;
@property (retain) NSNumber *passcode;
@property BOOL usingSharedSecretPassword;
@property BOOL paired;
@property BOOL serving;
@property unsigned long long unableToStartServerReason;
@property BOOL daemonCrashed;

+ (id)pairingEventsListenerInterface;

- (id)init;
- (void).cxx_destruct;
- (void)connectToDaemon;
- (void)stopServingRemoteMacs;
- (void)startServingRemoteMacsWithSecretPassword:(id)a0;
- (void)acceptTrustedPassCode;
- (void)rejectTrustedPassCode;
- (void)receiveUpdatedPasscode:(id)a0;
- (void)pairingCompleted;
- (BOOL)canGenerateValidTXTRecord;
- (void)startServingRemoteMacsUsingSourcePath:(id)a0 andSecretPassword:(id)a1;

@end
