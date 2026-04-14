@interface _EARPronunciationRecognition : NSObject {
    struct unique_ptr<quasar::SystemConfig, std::default_delete<quasar::SystemConfig>> { struct { struct SystemConfig *__ptr_; } ; } _sysConfig;
    struct unique_ptr<quasar::ptt::PronunciationRecognizer, std::default_delete<quasar::ptt::PronunciationRecognizer>> { struct { struct PronunciationRecognizer *__ptr_; } ; } _recognizer;
}

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)transcribeMultipleFromJsonResultsPath:(id)a0;
- (id)transcribePronunciation:(id)a0;

@end
