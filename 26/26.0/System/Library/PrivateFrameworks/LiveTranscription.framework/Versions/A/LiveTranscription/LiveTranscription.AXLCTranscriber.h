@class _TtC17LiveTranscription15AXLCTranscriber, NSArray, NSLocale;

@interface LiveTranscription.AXLCTranscriber : NSObject {
    void /* unknown type, empty encoding */ source;
    void /* unknown type, empty encoding */ clientCallback;
    void /* unknown type, empty encoding */ transcriber;
    void /* unknown type, empty encoding */ speechAnalyzer;
    void /* unknown type, empty encoding */ inputStream;
    void /* unknown type, empty encoding */ inputStreamBuilder;
    void /* unknown type, empty encoding */ bestAudioFormat;
    void /* unknown type, empty encoding */ converter;
    void /* unknown type, empty encoding */ progressObserver;
    void /* unknown type, empty encoding */ downloaders;
    void /* unknown type, empty encoding */ downloadProgresses;
    void /* unknown type, empty encoding */ downloadError;
    void /* unknown type, empty encoding */ downloadCompleted;
}

@property (class, nonatomic, readonly) _TtC17LiveTranscription15AXLCTranscriber *shared;

+ (void)defaultLocaleWithCompletionHandler:(void (^)(NSLocale *))a0;
+ (id)formattedLocaleIDsFrom:(id)a0;
+ (void)installedLocalesWithCompletionHandler:(void (^)(NSArray *))a0;
+ (void)supportedLocalesWithCompletionHandler:(void (^)(NSArray *))a0;

- (id)init;
- (void).cxx_destruct;
- (void)addAudioPCMBuffer:(id)a0 for:(id)a1;
- (void)resetErrorStates;
- (void)startTranscriptionFor:(id)a0 audioFormat:(id)a1 transcriberResult:(id /* block */)a2;
- (void)stopTranscriptionFor:(id)a0;

@end
