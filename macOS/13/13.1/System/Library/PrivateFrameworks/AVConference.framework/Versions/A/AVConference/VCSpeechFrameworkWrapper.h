@interface VCSpeechFrameworkWrapper : NSObject

@property (readonly, nonatomic) BOOL frameworkLoaded;

+ (id)defaultSpeechFrameworkWrapper;

- (id)init;
- (id)findSpeechFrameworkPath;
- (BOOL)loadSpeechFramework;
- (id)newSFSpeechRecognizerWithLocale:(id)a0;
- (id)newSFSpeechAudioBufferRecognitionRequest;
- (id)supportedLocales;

@end
