@class NSArray, NSMutableArray, AMSMockURLOverride;

@interface AMSMockNetworkProxy : NSURLProtocol

@property (class, readonly) NSMutableArray *_executedOverrides;
@property (class, readonly) NSArray *registeredOverrides;
@property (class, readonly) NSArray *executedOverrides;

@property (retain) AMSMockURLOverride *currentOverride;

+ (void)removeOverride:(id)a0;
+ (void)_sync:(id /* block */)a0;
+ (void)addOverride:(id)a0;
+ (void)clearOverrides;
+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (id)_overrides;
+ (void)_removeAllOverrides;
+ (void)_removeOverride:(id)a0;

- (void)finishWithError:(id)a0;
- (void)startLoading;
- (void).cxx_destruct;
- (void)sendResponse:(id)a0;
- (void)stopLoading;
- (void)finishWithData:(id)a0;
- (void)performRedirectFromResponse:(id)a0;

@end
