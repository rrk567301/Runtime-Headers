@class NSUUID, NSObject;
@protocol OS_dispatch_queue, HMDFairPlaySAPSessionDelegate;

@interface HMDFairPlaySAPSession : HMFObject

@property (nonatomic) unsigned long long state;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, weak) id<HMDFairPlaySAPSessionDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, nonatomic) NSUUID *sessionIdentifier;

- (void)dealloc;
- (void).cxx_destruct;
- (void)close;
- (void)_teardown;
- (id)initWithDelegate:(id)a0 delegateQueue:(id)a1;
- (void)_closeWithError:(id)a0;
- (void)_setupSAPSessionWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)openWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)signatureForData:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)verifySignedData:(id)a0 signature:(id)a1 completionQueue:(id)a2 completionHandler:(id /* block */)a3;

@end
