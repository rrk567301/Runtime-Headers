@interface VCSpeechFrameworkWrapper : NSObject

@property (readonly, nonatomic) char frameworkLoaded;

+ (id)defaultSpeechFrameworkWrapper;

- (id)init;
- (id)supportedLocales;
- (id)findSpeechFrameworkPath;
- (char)loadSpeechFramework;
- (id)newSFSpeechAnalyzerOptionsWithHighPriority:(char)a0 loggingInfo:(id)a1 powerContext:(id)a2;
- (id)newSFSpeechAnalyzerTranscriberOptions;
- (id)newSFSpeechAnalyzerWithConfig:(struct tagVCSFSpeechAnalyzerConfig { id x0; id x1; id x2; id x3; id x4; id x5; id x6; char x7; id x8; id x9; })a0 didChangeVolatileRange:(id /* block */)a1;
- (id)newSFSpeechAudioBufferRecognitionRequest;
- (id)newSFSpeechRecognizerWithLocale:(id)a0;

@end
