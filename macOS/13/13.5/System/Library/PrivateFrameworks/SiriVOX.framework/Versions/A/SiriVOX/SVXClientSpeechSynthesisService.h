@class NSString;
@protocol SVXPerforming, SVXClientServiceProviding;

@interface SVXClientSpeechSynthesisService : NSObject <SVXClientServiceConsuming, SVXClientSpeechSynthesisServicing> {
    id<SVXPerforming> _performer;
    id<SVXClientServiceProviding> _clientServiceProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)prewarmRequest:(id)a0;
- (void)cancelPendingRequest:(id)a0;
- (void)clientServiceDidChange:(BOOL)a0;
- (void)enqueueRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithClientServiceProvider:(id)a0 analytics:(id)a1 performer:(id)a2;
- (void)stopRequest:(id)a0;
- (void)synthesizeRequest:(id)a0 completion:(id /* block */)a1;

@end
