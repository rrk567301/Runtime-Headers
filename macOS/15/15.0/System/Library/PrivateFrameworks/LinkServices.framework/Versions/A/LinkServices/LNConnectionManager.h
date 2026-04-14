@class LNTranscriptPrivilegedProvider, NSMutableDictionary, NSString;

@interface LNConnectionManager : NSObject <LNConnectionDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableDictionary *connectionsByBundleIdentifier;
@property (readonly, nonatomic) LNTranscriptPrivilegedProvider *transcriptProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)removeConnection:(id)a0;
- (void)addConnection:(id)a0;
- (void)appWillResignActive:(id)a0;
- (void)connection:(id)a0 didCloseWithError:(id)a1;
- (id)connectionForBundleIdentifier:(id)a0 bundleURL:(id)a1 bundleType:(id)a2 appBundleIdentifier:(id)a3 mangledTypeName:(id)a4 userIdentity:(id)a5 error:(id *)a6;
- (void)donateActionRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)invalidateAllConnections;
- (id)newConnectionForBundleIdentifier:(id)a0 bundleURL:(id)a1 bundleType:(id)a2 appBundleIdentifier:(id)a3 mangledTypeName:(id)a4 userIdentity:(id)a5 error:(id *)a6;

@end
