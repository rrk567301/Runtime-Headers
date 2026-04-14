@class NSString, AVSpeechSynthesizer;

@interface WebSpeechSynthesisWrapper : NSObject <AVSpeechSynthesizerDelegate> {
    struct WeakPtr<WebCore::PlatformSpeechSynthesizer, WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_synthesizerObject;
    struct RefPtr<WebCore::PlatformSpeechSynthesisUtterance, WTF::RawPtrTraits<WebCore::PlatformSpeechSynthesisUtterance>, WTF::DefaultRefDerefTraits<WebCore::PlatformSpeechSynthesisUtterance>> { struct PlatformSpeechSynthesisUtterance *m_ptr; } m_utterance;
    struct RetainPtr<AVSpeechSynthesizer> { AVSpeechSynthesizer *m_ptr; } m_synthesizer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void)resetState;
- (void)cancel;
- (void)resume;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)speakUtterance:(void *)a0;
- (void)availableVoicesDidChange;
- (id)initWithSpeechSynthesizer:(void *)a0;
- (float)mapSpeechRateToPlatformRate:(float)a0;
- (void)speechSynthesizer:(id)a0 didCancelSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didContinueSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didFinishSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didPauseSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 didStartSpeechUtterance:(id)a1;
- (void)speechSynthesizer:(id)a0 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 utterance:(id)a2;

@end
