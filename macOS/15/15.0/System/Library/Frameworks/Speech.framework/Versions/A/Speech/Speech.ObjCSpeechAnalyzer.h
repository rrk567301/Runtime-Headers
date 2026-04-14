@class NSString, NSArray, NSURL, NSError, AVAudioFormat;

@interface Speech.ObjCSpeechAnalyzer : NSObject {
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ inputStreamBuilder;
    void /* unknown type, empty encoding */ normalizedTranscriber;
    void /* unknown type, empty encoding */ contextualizedTranscriber;
    void /* unknown type, empty encoding */ endpointDetector;
    void /* unknown type, empty encoding */ speechAnalyzer;
    void /* unknown type, empty encoding */ languageDetector;
}

+ (id)modelDownloadRequestForClientIdentifier:(id)a0 transcriberOptions:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithObjCSpeechAnalyzer:(id)a0 clientIdentifier:(id)a1 audioFormat:(id)a2 transcriberResultDelegate:(id)a3 endpointingResultDelegate:(id)a4 languageDetectorResultDelegate:(id)a5 queue:(id)a6 transcriberOptions:(id)a7 options:(id)a8 languageDetectorOptions:(id)a9 restrictedLogging:(BOOL)a10 geoLMRegionID:(id)a11 contextualNamedEntities:(id)a12 didChangeVolatileRange:(id /* block */)a13;
- (void)requestResultAtEndpointTimes:(id)a0;
- (void)setAnalysisContextWithGeoLMRegionID:(NSString *)a0 contextualNamedEntities:(NSArray *)a1 completionHandler:(void (^)(NSError *))a2;
- (void)setInputAudioFile:(NSURL *)a0 withAudioFormat:(AVAudioFormat *)a1 completionHandler:(void (^)(NSError *))a2;

@end
