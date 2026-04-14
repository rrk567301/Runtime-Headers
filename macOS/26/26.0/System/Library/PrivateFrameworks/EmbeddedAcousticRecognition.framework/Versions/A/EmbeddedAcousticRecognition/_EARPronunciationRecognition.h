@interface _EARPronunciationRecognition : NSObject {
    struct unique_ptr<quasar::SystemConfig, std::default_delete<quasar::SystemConfig>> { struct SystemConfig *__ptr_; } _sysConfig;
    struct unique_ptr<quasar::ptt::PronunciationRecognizer, std::default_delete<quasar::ptt::PronunciationRecognizer>> { struct PronunciationRecognizer *__ptr_; } _recognizer;
}

- (id).cxx_construct;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)transcribeMultipleFromJsonResultsPath:(id)a0;
- (id)transcribePronunciation:(id)a0;

@end
