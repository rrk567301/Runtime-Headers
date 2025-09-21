@class NSString, NSDictionary, CRNeuralRecognizerConfiguration, NSURL, NSNumber, NSError;

@interface CRTextSequenceRecognizerModel : NSObject <CRTextRecognizerModel>

@property (readonly, nonatomic) int *codemapArray;
@property (readonly, nonatomic) unsigned long long codemapSize;
@property (readonly, nonatomic) long long ctcBlankLabelIndex;
@property (readonly, nonatomic) NSDictionary *outputShape;
@property (readonly, nonatomic) NSNumber *outputWidthDownscale;
@property (readonly, nonatomic) NSNumber *outputWidthOffset;
@property (readonly, nonatomic) NSNumber *outputFormatVersion;
@property (readonly, nonatomic) CRNeuralRecognizerConfiguration *configuration;
@property (readonly, nonatomic) NSURL *modelURL;
@property (readonly, nonatomic) BOOL supportCharacterBoxes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultURLOfModelInThisBundle;

- (void)dealloc;
- (void).cxx_destruct;
- (void)preheatWithCompletionHandler:(void (^)(NSError *))a0;
- (struct TextBoxesOffsets { double x0; double x1; double x2; double x3; })characterBoxesOffsets;
- (id)initWithConfiguration:(id)a0 owner:(id)a1 error:(id *)a2;
- (id)objcInputBatchFromLineRegions:(id)a0 image:(id)a1 regionWidth:(double)a2 configuration:(id)a3 rectifier:(id)a4;
- (id)predictFromInputs:(id)a0 error:(id *)a1;
- (void)releaseIntermediateBuffers;
- (struct TextBoxesOffsets { double x0; double x1; double x2; double x3; })wordBoxesOffsets;

@end
