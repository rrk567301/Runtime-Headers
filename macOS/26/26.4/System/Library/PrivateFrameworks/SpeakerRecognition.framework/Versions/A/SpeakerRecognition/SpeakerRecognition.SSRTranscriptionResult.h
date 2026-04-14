@class NSString;

@interface SpeakerRecognition.SSRTranscriptionResult : NSObject {
    void /* function */ text;
}

@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) float snr;
@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)init;
- (id)initWithText:(id)a0 snr:(float)a1;

@end
