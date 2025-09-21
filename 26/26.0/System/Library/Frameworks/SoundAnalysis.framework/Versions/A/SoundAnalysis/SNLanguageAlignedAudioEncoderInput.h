@class MLMultiArray, NSSet;

@interface SNLanguageAlignedAudioEncoderInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *specgram;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithSpecgram:(id)a0;

@end
