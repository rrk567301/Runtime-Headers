@class NSString;

@interface TranslatorClientDelegate : NSObject <STSpeechTranslatorClientDelegate> {
    struct weak_ptr<AT::Translation::TranslatorClient> { struct TranslatorClient *__ptr_; struct __shared_weak_count *__cntrl_; } mImpl;
    int mScope;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)audioGenerationDidFinishForClient:(id)a0;
- (void)client:(id)a0 didGenerateTranslatedAudio:(id)a1;
- (void)client:(id)a0 didPauseTranslationWithReason:(id)a1;
- (void)client:(id)a0 didReceiveTranscriptionResult:(id)a1;
- (void)client:(id)a0 didReceiveTranslationResult:(id)a1;
- (void)client:(id)a0 didStopTranslationWithError:(id)a1;
- (void)client:(id)a0 willStartTranslatedAudioWithMetadata:(id)a1;
- (id)initWithWeakImpl:(struct weak_ptr<AT::Translation::TranslatorClient> { struct TranslatorClient *x0; struct __shared_weak_count *x1; })a0 scope:(int)a1;
- (void)serverDidDisconnectForClient:(id)a0;
- (void)translationDidResumeForClient:(id)a0;
- (void)translationDidStartForClient:(id)a0;

@end
