@class NSURLSession, NSString, NEPvDConfiguration, NSURL, NSOperationQueue, NSDate, NSObject;
@protocol OS_dispatch_source, NEPvDFetcherDelegate;

@interface NEPvDFetcher : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate> {
    BOOL _currentlyFetching;
    NSURL *_url;
    NSURLSession *_session;
    NSOperationQueue *_queue;
    struct __SecIdentity { } *_identityRef;
    NSDate *_lastFetchDate;
    NSObject<OS_dispatch_source> *_fetchTimer;
    id<NEPvDFetcherDelegate> _delegate;
    NEPvDConfiguration *_currentConfig;
}

@property (readonly) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)URLSession:(id)a0 taskIsWaitingForConnectivity:(id)a1;
- (void)dealloc;
- (void)URLSession:(id)a0 task:(id)a1 didReceiveChallenge:(id)a2 completionHandler:(id /* block */)a3;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 queue:(id)a1 url:(id)a2 identityRef:(struct __SecIdentity { } *)a3;

@end
