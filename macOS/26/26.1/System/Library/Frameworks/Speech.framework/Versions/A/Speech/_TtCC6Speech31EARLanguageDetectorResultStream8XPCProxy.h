@interface _TtCC6Speech31EARLanguageDetectorResultStream8XPCProxy : NSObject <_SFXPCEARLanguageDetectorResultStream> {
    void /* unknown type, empty encoding */ enqueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)languageDetectorDidFinishWithError:(id)a0;
- (void)languageDetectorDidRecognizeResult:(id)a0 processedAudioDuration:(double)a1;

@end
