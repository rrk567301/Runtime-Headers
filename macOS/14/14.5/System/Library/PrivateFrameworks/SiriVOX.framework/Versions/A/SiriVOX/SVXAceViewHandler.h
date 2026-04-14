@class SVXInstrumentationUtilities, SVXSpeechSynthesizer, SVXAFUtilitiesWrapper, SVXSpeechSynthesisResultConverter, SVXModule, SVXAceViewSpeakableTextExtractor;

@interface SVXAceViewHandler : NSObject {
    SVXAceViewSpeakableTextExtractor *_speakableTextExtractor;
    SVXModule *_module;
    SVXInstrumentationUtilities *_instrumentationUtils;
    SVXSpeechSynthesizer *_speechSynthesizer;
    SVXAFUtilitiesWrapper *_afUtilitiesWrapper;
    SVXSpeechSynthesisResultConverter *_synthesisResultConverter;
}

- (void).cxx_destruct;
- (void)handleAceView:(id)a0 isExpository:(BOOL)a1 taskTracker:(id)a2 completion:(id /* block */)a3;
- (id)initWithModule:(id)a0 instrumentationUtils:(id)a1 speechSynthesizer:(id)a2 synthesisResultConverter:(id)a3;
- (id)initWithModule:(id)a0 instrumentationUtils:(id)a1 speechSynthesizer:(id)a2 synthesisResultConverter:(id)a3 speakableTextExtractor:(id)a4 afUtilitiesWrapper:(id)a5;

@end
