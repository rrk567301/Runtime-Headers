@class NSString;

@interface TextToSpeechVoiceBankingSupport.TTSVBAudioQualityMeasurement : NSObject

@property (nonatomic) float spl;
@property (nonatomic) float splEnd;
@property (nonatomic) float splUnnormalized;
@property (nonatomic) float splEndUnnormalized;
@property (nonatomic) float splThreshold;
@property (nonatomic) float snr;
@property (nonatomic) float snrEnd;
@property (nonatomic) float snrUnnormalized;
@property (nonatomic) float snrEndUnnormalized;
@property (nonatomic) float snrThreshold;
@property (nonatomic, readonly) NSString *description;

- (id)init;

@end
