@class NSDictionary, NSLocale;

@interface _LTMultilingualSpeechRecognizer : NSObject {
    NSDictionary *_recognizers;
}

@property (retain, nonatomic) NSLocale *currentLocale;
@property (nonatomic) BOOL enableMultiFieldInput;

- (void)endAudio;
- (void)addSpeechAudioData:(id)a0;
- (void).cxx_destruct;
- (void)cancelRecognition;
- (id)initWithModelURLs:(id)a0 modelVersions:(id)a1 taskHint:(long long)a2;
- (id)loadedRecognizers;
- (void)setLanguagesRecognized:(id)a0;
- (void)startRecognitionForLocale:(id)a0 autoEndpoint:(BOOL)a1 enableStreamingSpeechTranslation:(BOOL)a2 enableMultiFieldInput:(BOOL)a3 resultHandler:(id /* block */)a4;

@end
