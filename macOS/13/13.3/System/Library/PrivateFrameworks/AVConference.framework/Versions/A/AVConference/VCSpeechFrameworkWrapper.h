@interface VCSpeechFrameworkWrapper : NSObject

@property (readonly, nonatomic) BOOL frameworkLoaded;

+ (id)defaultSpeechFrameworkWrapper;

- (id)init;
- (id)findSpeechFrameworkPath;
- (BOOL)loadSpeechFramework;
- (id)newSFSpeechAudioBufferRecognitionRequest;
- (id)newSFSpeechRecognizerWithLocale:(id)a0;
- (id)supportedLocales;

@end
