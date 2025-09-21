@class NSArray, NSMachPort, UNConnectionPair, UNDaemonConnection;

@interface UNUninstallRequest : NSObject {
    UNDaemonConnection *_connection;
    NSMachPort *_requestingClient;
    NSMachPort *_remoteBootstrap;
    unsigned int _requestNumber;
    NSArray *_bundlePaths;
    char _forceApplicationQuit;
    char _preserveApplicationData;
    char _isClient;
}

@property (retain) UNConnectionPair *connectionPair;

+ (id)requestUninstallOfBundleAtURL:(id)a0;
+ (id)requestUninstallOfBundlesAtURLsInSet:(id)a0;
+ (char)setAuthorizationForRequests:(struct AuthorizationOpaqueRef { } *)a0;
+ (int)uninstallablityOfFileAtURL:(id)a0;

- (void).cxx_destruct;
- (void)_setConnection:(id)a0;
- (id)initWithBundleAtURL:(id)a0;
- (unsigned int)requestNumber;
- (id)remoteBootstrap;
- (char)_requestUninstallOfBundlesAtPaths:(id)a0;
- (char)abortUninstall;
- (id)bundlePaths;
- (char)forceApplicationQuit;
- (id)initWithBundleAtURL:(id)a0 asClient:(char)a1;
- (id)initWithBundlePathsInArray:(id)a0 asClient:(char)a1;
- (id)initWithBundlesAtURLsInArray:(id)a0 asClient:(char)a1;
- (id)initWithBundlesAtURLsInSet:(id)a0;
- (char)preserveApplicationData;
- (char)queueRequest;
- (id)requestingClient;
- (void)shouldForceRunningApplicationsToQuit:(char)a0;
- (void)shouldPreserveApplicationData:(char)a0;

@end
