@class NSString, NSDate, geo_isolater, NSMutableArray;
@protocol _GEONetworkDefaultsServerProxyDelegate;

@interface _GEONetworkDefaultsLocalProxy : NSObject <_GEONetworkDefaultsServerProxy, GEOPListStateCapturing> {
    geo_isolater *_isolation;
    NSMutableArray *_updateCompletionHandlers;
    unsigned long long _stateCaptureHandle;
    NSDate *_lastNetworkFailure;
}

@property (weak, nonatomic) id<_GEONetworkDefaultsServerProxyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)captureStatePlistWithHints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a0;
- (void)updateNetworkDefaultsWithReason:(unsigned long long)a0 completionHandler:(id /* block */)a1;
- (void)updateNetworkDefaults:(id /* block */)a0;
- (void)_updateNetworkDefaults;
- (void)_callCompletionHandlersWithError:(id)a0;
- (id)_urlRequestForNetworkDefaults;
- (void)_processNetworkDefaultsResponse:(id)a0 data:(id)a1 error:(id)a2 request:(id)a3;
- (void)_updateWithNewConfig:(id)a0 request:(id)a1 response:(id)a2;

@end
