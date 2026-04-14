@class NSLocale;

@interface SpeakerRecognition.SSRSpeechTranscriberIntf : NSObject {
    void /* unknown type, empty encoding */ locale;
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ cleanupQueue;
    void /* unknown type, empty encoding */ dictationTranscriber;
    void /* unknown type, empty encoding */ speechAnalyzer;
    void /* unknown type, empty encoding */ audioEnqueuer;
    void /* unknown type, empty encoding */ resultHandlerTask;
    void /* unknown type, empty encoding */ audioFormat;
    void /* unknown type, empty encoding */ isCleaningUp;
}

@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, readonly) NSLocale *locale;
@property (nonatomic) BOOL isTranscribing;

+ (void)validateAssetAvailabilityForLocale:(id)a0 completion:(id /* block */)a1;

- (void)finishAudio;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)addAudio:(id)a0;
- (id)initWithLocaleString:(id)a0;
- (void)startTranscriptionWithCompletion:(id /* block */)a0;
- (void)stopTranscription;

@end
