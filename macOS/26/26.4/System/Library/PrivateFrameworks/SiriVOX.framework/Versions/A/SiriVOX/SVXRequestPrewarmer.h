@class SVXSpeechSynthesizer, SVXSessionIdleTimer, SVXAFConnectionManager;
@protocol SVXPerforming;

@interface SVXRequestPrewarmer : NSObject {
    SVXAFConnectionManager *_connectionManager;
    SVXSpeechSynthesizer *_speechSynthesizer;
    SVXSessionIdleTimer *_idleTimer;
    id<SVXPerforming> _performer;
}

- (void).cxx_destruct;
- (void)preheatWithStyle:(long long)a0;
- (void)_preheatWithStyle:(long long)a0;
- (id)initWithConnectionManager:(id)a0 speechSynthesizer:(id)a1 idleTimer:(id)a2 performer:(id)a3;
- (void)prewarmWithContext:(id)a0 completion:(id /* block */)a1;

@end
