@class NSXPCConnection, NSNumber, NSXPCInterface;
@protocol SMDMigrateFromProtocol;

@interface SMMigrationFrom_Client : NSObject <MigrationPairingEventsListener>

@property (retain) NSXPCInterface *daemonInterface;
@property (retain) NSXPCInterface *exportedInterface;
@property (retain) NSXPCConnection *daemonConnection;
@property (retain) id<SMDMigrateFromProtocol> daemonProxy;
@property (retain) NSNumber *passcode;
@property char usingSharedSecretPassword;
@property char paired;
@property char serving;
@property unsigned long long unableToStartServerReason;
@property char daemonCrashed;

+ (id)pairingEventsListenerInterface;

- (id)init;
- (void).cxx_destruct;
- (void)connectToDaemon;
- (void)acceptTrustedPassCode;
- (char)canGenerateValidTXTRecord;
- (char)canStartMigration;
- (void)pairingCompleted;
- (void)receiveUpdatedPasscode:(id)a0;
- (void)rejectTrustedPassCode;
- (void)startServingRemoteMacsUsingSourcePath:(id)a0 andSecretPassword:(id)a1;
- (void)startServingRemoteMacsWithSecretPassword:(id)a0;
- (void)stopServingRemoteMacs;

@end
