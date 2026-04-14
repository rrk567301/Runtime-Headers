@class AARemoteServerConfigurationCache, AAURLSession, NSObject;
@protocol OS_dispatch_queue;

@interface AARemoteServer : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _configurationLock;
    NSObject<OS_dispatch_queue> *_configurationQueue;
    AARemoteServerConfigurationCache *_configurationCache;
}

@property (class, readonly) AARemoteServer *sharedServer;

@property (retain, nonatomic) AAURLSession *session;
@property (retain, nonatomic) AAURLSession *signingSession;

- (id)init;
- (void).cxx_destruct;
- (void)configurationWithCompletion:(id /* block */)a0;
- (void)_configurationAndResponseWithCompletion:(id /* block */)a0;
- (void)_setConfigurationCache:(id)a0;
- (id)_configurationCacheInvalidatingIfNecessary;
- (id)_configurationLock_configurationCacheInvalidatingIfNecessary;
- (void)_fetchConfigurationAndResponseWithCompletion:(id /* block */)a0;
- (void)authenticateAccount:(id)a0 completion:(id /* block */)a1;
- (void)registerAccount:(id)a0 withHSA:(BOOL)a1 completion:(id /* block */)a2;
- (void)loginDelegates:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
- (id)_bodyDictionaryWithProtocolVersion:(id)a0;
- (id)_redactedBodyStringWithPropertyList:(id)a0;
- (id)_redactedHeadersFromHTTPHeaders:(id)a0;
- (void)_startRequest:(id)a0 responseClass:(Class)a1 mainThread:(BOOL)a2 completion:(id /* block */)a3;
- (id)_newURLRequestWithURLString:(id)a0;

@end
