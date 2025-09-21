@interface VNLKTOpticalFlow : NSObject

@property (nonatomic) char isValid;
@property (readonly, nonatomic) int width;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) int levelCount;
@property (readonly, nonatomic) int numScales;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) int numWarpings;
@property (nonatomic) char useNonLocalRegularization;
@property (nonatomic) int nlreg_radius;
@property (nonatomic) int nlreg_padding;
@property (nonatomic) float nlreg_sigma_l;
@property (nonatomic) float nlreg_sigma_c;
@property (nonatomic) float nlreg_sigma_w;

- (void)waitUntilCompleted;
- (id)initWithWidth:(int)a0 height:(int)a1 numScales:(int)a2;
- (char)_validateInputImage:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (char)_validateOutputImage:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (char)estimateFlowFromReference:(struct __CVBuffer { } *)a0 target:(struct __CVBuffer { } *)a1 error:(id *)a2;
- (char)estimateFlowStream:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (char)setOutputUV:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
