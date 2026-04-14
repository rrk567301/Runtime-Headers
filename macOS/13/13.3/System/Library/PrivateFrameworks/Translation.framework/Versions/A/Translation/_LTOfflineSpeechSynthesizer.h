@class NSString, AVSpeechSynthesizer;

@interface _LTOfflineSpeechSynthesizer : NSObject <AVSpeechSynthesizerDelegate> {
    id /* block */ _completion;
    AVSpeechSynthesizer *_synth;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCompletion:(id /* block */)a0;
- (void)speechSynthesizer:(id)a0 didCancelSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didFinishSpeechUtterance:(id)a1;
- (void)speak:(id)a0 withContext:(id)a1;

@end
