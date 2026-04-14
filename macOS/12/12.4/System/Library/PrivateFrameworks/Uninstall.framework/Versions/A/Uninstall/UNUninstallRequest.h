@class NSArray, UNDaemonConnection, NSMachPort;

@interface UNUninstallRequest : NSObject {
    UNDaemonConnection *_connection;
    NSMachPort *_requestingClient;
    NSMachPort *_remoteBootstrap;
    unsigned int _requestNumber;
    NSArray *_bundlePaths;
    BOOL _forceApplicationQuit;
    BOOL _preserveApplicationData;
    BOOL _isClient;
}

+ (id)requestUninstallOfBundleAtURL:(id)a0;
+ (id)requestUninstallOfBundlesAtURLsInSet:(id)a0;
+ (BOOL)setAuthorizationForRequests:(struct AuthorizationOpaqueRef { } *)a0;
+ (int)uninstallablityOfFileAtURL:(id)a0;
+ (BOOL)_isAdminUser;

- (void)dealloc;
- (void)_setConnection:(id)a0;
- (id)initWithBundleAtURL:(id)a0;
- (unsigned int)requestNumber;
- (id)initWithBundleAtURL:(id)a0 asClient:(BOOL)a1;
- (id)initWithBundlesAtURLsInArray:(id)a0 asClient:(BOOL)a1;
- (BOOL)_requestUninstallOfBundlesAtPaths:(id)a0;
- (id)initWithBundlesAtURLsInSet:(id)a0;
- (BOOL)queueRequest;
- (BOOL)abortUninstall;
- (void)shouldForceRunningApplicationsToQuit:(BOOL)a0;
- (void)shouldPreserveApplicationData:(BOOL)a0;
- (id)initWithBundlePathsInArray:(id)a0 asClient:(BOOL)a1;
- (id)bundlePaths;
- (BOOL)forceApplicationQuit;
- (BOOL)preserveApplicationData;
- (void)setRequestingClient:(id)a0;
- (id)requestingClient;
- (void)setRemoteBootstrap:(id)a0;
- (id)remoteBootstrap;

@end
