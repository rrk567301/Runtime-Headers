@class NSString, NSDictionary, NSObject, SKSetupBase;
@protocol OS_dispatch_queue, CUMessaging;

@interface SKStepBasicConfigClient : NSObject <SKStepable> {
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    BOOL _responseReceived;
    int _runState;
}

@property (copy, nonatomic) NSDictionary *outServerConfig;
@property (copy, nonatomic) NSDictionary *clientConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ skCompletionHandler;
@property (retain, nonatomic) id<CUMessaging> skMessaging;
@property (weak, nonatomic) SKSetupBase *skSetupObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_run;
- (void)invalidate;
- (void)_invalidated;
- (id)init;
- (void)_completeWithError:(id)a0;
- (void)activate;
- (void).cxx_destruct;
- (BOOL)_runBasicConfigStart;

@end
