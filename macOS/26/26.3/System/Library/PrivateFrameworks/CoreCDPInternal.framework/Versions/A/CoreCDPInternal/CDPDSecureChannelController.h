@class CDPDSecureChannelContext, NSObject;
@protocol OS_dispatch_queue;

@interface CDPDSecureChannelController : NSObject {
    CDPDSecureChannelContext *_secureChannelContext;
    NSObject<OS_dispatch_queue> *_secureChannelProcessingQueue;
}

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (void)_joinCircle:(id /* block */)a0;
- (void)_processAndReplyWithMessage:(id)a0 completion:(id /* block */)a1;
- (void)_startListeningWithProxy:(id)a0 completion:(id /* block */)a1;
- (void)_startListeningWithProxyWithEnforcedQoS:(id)a0 completion:(id /* block */)a1;
- (void)enforceQOS:(id /* block */)a0;
- (void)joinCircle:(id /* block */)a0;
- (void)startCircleApplicationApprovalServerWithContext:(id)a0 serverStarted:(id /* block */)a1 completion:(id /* block */)a2;

@end
