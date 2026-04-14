@class NSString, NSXPCConnection;

@interface SUManualProductAdopter : NSObject {
    NSXPCConnection *_connection;
    NSString *_archivePath;
    struct AuthorizationOpaqueRef { } *_authRef;
    BOOL _didFail;
    BOOL _shouldStashCredentials;
}

@property (copy) NSString *displayName;
@property (copy) NSString *displayVersion;
@property BOOL allowDevSigned;

+ (BOOL)restartNow;

- (void)dealloc;
- (BOOL)authorize:(struct AuthorizationOpaqueRef { } *)a0;
- (void)_setProgressPhases:(id)a0;
- (BOOL)_bridgeOSUpdatePrepared;
- (id)initWithManualProductArchiveAtPath:(id)a0 error:(id *)a1;
- (BOOL)adoptReturningError:(id *)a0;
- (BOOL)installAfterLogoutRestartingNow:(BOOL)a0;
- (BOOL)installRestartingNow;

@end
