@class NSString;

@interface VCSpeechFrameworkWrapper : NSObject {
    void /* function */ *_endModelRetention;
}

@property (readonly, nonatomic) BOOL frameworkLoaded;
@property (readonly, nonatomic) NSString *frameworkPath;
@property (readonly, nonatomic) BOOL isGeneralASRSupported;

+ (unsigned long long)assetTypeForTaskHint:(unsigned char)a0;
+ (id)defaultSpeechFrameworkWrapper;

- (id)init;
- (id)supportedLocales;
- (void)analyzerEndModelRetention:(id /* block */)a0;
- (id)findSpeechFrameworkPath;
- (BOOL)isAssetInstalledForTaskHint:(unsigned char)a0 forLocale:(id)a1 forTaskIdentifier:(id)a2;
- (void)loadLanguageDetectorAssetsWithTaskIdentifier:(id)a0;
- (void)loadSpeechAssetsWithAssetType:(unsigned long long)a0 withLanguage:(id)a1 withTaskIdentifier:(id)a2 withCompletionHandler:(id /* block */)a3;
- (BOOL)loadSpeechFramework;
- (void)loadSpeechFunctionEndModelRetention;
- (void)loadTranscriptionAssetsWithTaskHint:(unsigned char)a0 withLocale:(id)a1 withTaskIdentifier:(id)a2 withCompletionHandler:(id /* block */)a3;
- (id)newSFSpeechAnalyzerLanguageDetectorOptions;
- (id)newSFSpeechAnalyzerLanguageDetectorOptionsWithResultReportingFrequency:(unsigned long long)a0;
- (id)newSFSpeechAnalyzerOptionsWithHighPriority:(BOOL)a0 modelRetention:(unsigned long long)a1 loggingInfo:(id)a2 powerContext:(id)a3;
- (id)newSFSpeechAnalyzerSpeechDetectorOptions;
- (id)newSFSpeechAnalyzerTranscriberOptions;
- (id)newSFSpeechAnalyzerWithConfig:(struct tagVCSFSpeechAnalyzerConfig { id x0; id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; BOOL x11; id x12; BOOL x13; })a0 didChangeVolatileRange:(id /* block */)a1;
- (id)newSFSpeechAudioBufferRecognitionRequest;
- (id)newSFSpeechRecognizerWithLocale:(id)a0;

@end
