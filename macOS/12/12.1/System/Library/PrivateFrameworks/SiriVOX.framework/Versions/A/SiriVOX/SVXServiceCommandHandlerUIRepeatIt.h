@class NSString, SVXSpeechSynthesisRequest, SVXSpeechSynthesizer;
@protocol SVXPerforming;

@interface SVXServiceCommandHandlerUIRepeatIt : NSObject <SVXSpeechSynthesisListening, SVXServiceCommandHandling> {
    SVXSpeechSynthesizer *_speechSynthesizer;
    id<SVXPerforming> _performer;
    SVXSpeechSynthesisRequest *_lastStartedRequest;
}

@property (class, readonly, nonatomic) Class supportedCommandClass;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (BOOL)isCommandUUFR:(id)a0;
- (void)handleCommand:(id)a0 withContext:(id)a1 taskTracker:(id)a2 completion:(id /* block */)a3;
- (BOOL)shouldDependOnCommand:(id)a0;
- (id)initWithSpeechSynthesizer:(id)a0 performer:(id)a1;
- (void)speechSynthesizerDidBecomeBusy:(id)a0;
- (void)speechSynthesizerDidBecomeIdle:(id)a0;
- (void)speechSynthesizer:(id)a0 willEnqueueRequest:(id)a1 taskTracker:(id)a2;
- (void)speechSynthesizer:(id)a0 willStartRequest:(id)a1 taskTracker:(id)a2;
- (void)speechSynthesizer:(id)a0 didStartRequest:(id)a1 record:(id)a2 taskTracker:(id)a3;
- (void)speechSynthesizer:(id)a0 didFinishRequest:(id)a1 utteranceInfo:(id)a2 record:(id)a3 taskTracker:(id)a4;
- (void)speechSynthesizer:(id)a0 didCancelRequest:(id)a1 taskTracker:(id)a2;
- (void)speechSynthesizer:(id)a0 didInterruptRequest:(id)a1 taskTracker:(id)a2;
- (void)speechSynthesizer:(id)a0 didFailRequest:(id)a1 taskTracker:(id)a2 error:(id)a3;

@end
