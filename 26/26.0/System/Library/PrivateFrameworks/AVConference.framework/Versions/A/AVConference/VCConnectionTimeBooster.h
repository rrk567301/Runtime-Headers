@class NSObject, VCAudioCaptionsSpeechRecognizer;
@protocol OS_dispatch_queue;

@interface VCConnectionTimeBooster : NSObject <VCAudioCaptionsDelegate> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

@property (retain, nonatomic) VCAudioCaptionsSpeechRecognizer *audioCaptions;

- (void)dealloc;
- (id)init;
- (void)captions:(id)a0 didChangeSourceLocale:(id)a1;
- (void)captions:(id)a0 didProduceLanguageHypothesis:(id)a1 streamToken:(long long)a2;
- (void)captions:(id)a0 didStopLanguageDetectorWithError:(id)a1 streamToken:(long long)a2;
- (void)didConfigureCaptionsWithError:(id)a0;
- (void)didDisableCaptions:(BOOL)a0 error:(id)a1;
- (void)didEnableCaptions:(BOOL)a0 error:(id)a1;
- (void)didStartCaptioningWithReason:(unsigned char)a0 streamToken:(long long)a1;
- (void)didStopCaptioningWithReason:(unsigned char)a0 streamToken:(long long)a1;
- (void)didUpdateCaptions:(id)a0;
- (void)initiateBoost;
- (void)setUpAudioCaptionsSpeechRecognizer;

@end
