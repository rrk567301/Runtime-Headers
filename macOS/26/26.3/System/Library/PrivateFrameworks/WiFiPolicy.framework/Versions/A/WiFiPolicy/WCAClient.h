@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WCAClient : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    long long _changeCounter;
}

@property (retain, nonatomic) NSXPCConnection *connectionToService;

+ (id)sharedClient;

- (id)init;
- (void)fetchWiFiAssetsFromServer;
- (void)_invalidateDaemonConnectionIfPossible;
- (void).cxx_destruct;
- (void)_establishDaemonConnection;
- (void)executeFetchRequest:(id)a0;

@end
