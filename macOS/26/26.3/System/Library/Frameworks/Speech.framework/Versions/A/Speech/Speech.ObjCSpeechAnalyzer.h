@class AVAudioFormat, NSString, _TtC6Speech25AssetsInstallationRequest, SFSpeechAnalyzerTranscriberOptions, NSArray, NSError, NSURL;

@interface Speech.ObjCSpeechAnalyzer : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ inputStreamBuilder;
    void /* unknown type, empty encoding */ normalizedTranscriber;
    void /* unknown type, empty encoding */ contextualizedTranscriber;
    void /* unknown type, empty encoding */ endpointDetector;
    void /* unknown type, empty encoding */ speechAnalyzer;
    void /* unknown type, empty encoding */ languageDetector;
    void /* unknown type, empty encoding */ speechDetector;
}

+ (void)assetsDownloadRequestForClientIdentifier:(NSString *)a0 transcriberOptions:(SFSpeechAnalyzerTranscriberOptions *)a1 completion:(void (^)(_TtC6Speech25AssetsInstallationRequest *))a2;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObjCSpeechAnalyzer:(id)a0 clientIdentifier:(id)a1 audioFormat:(id)a2 formatForNewLines:(BOOL)a3 transcriberResultDelegate:(id)a4 endpointingResultDelegate:(id)a5 languageDetectorResultDelegate:(id)a6 speechDetectorResultDelegate:(id)a7 queue:(id)a8 transcriberOptions:(id)a9 options:(id)a10 languageDetectorOptions:(id)a11 speechDetectorOptions:(id)a12 contextualNamedEntities:(id)a13 didChangeVolatileRange:(id /* block */)a14;
- (void)requestResultAtEndpointTimes:(id)a0;
- (void)setAnalysisContextWithContextualNamedEntities:(NSArray *)a0 completionHandler:(void (^)(NSError *))a1;
- (void)setInputAudioFile:(NSURL *)a0 withAudioFormat:(AVAudioFormat *)a1 completionHandler:(void (^)(NSError *))a2;

@end
