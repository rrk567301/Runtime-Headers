@protocol LipMovementVADDelegate;

@interface SDLipMovementVAD : NSObject

@property (readonly, nonatomic) double visualSpeechProbability;
@property (weak, nonatomic) id<LipMovementVADDelegate> delegate;

- (void)reset;
- (void).cxx_destruct;
- (id)initWithModelFile:(id)a0;
- (void)addFaceTrackingData:(id)a0 atMachAbsTime:(unsigned long long)a1;

@end
