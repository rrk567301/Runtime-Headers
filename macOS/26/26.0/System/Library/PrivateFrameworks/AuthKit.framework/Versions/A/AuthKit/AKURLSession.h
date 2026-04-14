@class NSURLSession, NSString, NSMutableDictionary, NSObject, AKServerBackoffHelper;
@protocol OS_dispatch_queue;

@interface AKURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate, AKURLSessionProtocol> {
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSMutableDictionary *_tasksByIdentifier;
    AKServerBackoffHelper *_serverBackoffHelper;
}

@property (nonatomic) BOOL _usesAppleIDContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedCacheReliantAnisetteFreeSession;
+ (void)removeAllCachedResponses;
+ (id)_urlBagCache;
+ (id)sharedCacheEnabledAnisetteFreeSession;
+ (id)sharedURLSession;
+ (id)sharedCacheEnabledURLSession;
+ (id)sharedAnisetteFreeURLSession;
+ (id)_createURLSessionUsesAppleIDContext:(BOOL)a0;
+ (id)sharedURLSessionWithDenyVirtualInterfaces;

- (id)sessionConfiguration;
- (void)cancelDataTask:(id)a0;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)URLSession:(id)a0 task:(id)a1 didCompleteWithError:(id)a2;
- (id)defaultSessionObjectWithConfiguration:(id)a0;
- (void)URLSession:(id)a0 didBecomeInvalidWithError:(id)a1;
- (void)URLSession:(id)a0 dataTask:(id)a1 didReceiveData:(id)a2;
- (id)init;
- (id)beginAuthenticationDataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_unsafe_retryTaskIfPossible:(id)a0;
- (id)_URLSession;
- (id)beginDataTaskWithRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isRecoverableError:(id)a0;
- (void)_unsafe_completeTask:(id)a0 withError:(id)a1;
- (void).cxx_destruct;

@end
