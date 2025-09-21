@class NSString;

@interface FRCOpticalFlowEstimatorConfiguration : NSObject

@property (nonatomic) long long mode;
@property (nonatomic) BOOL disableOutputFlowScaling;
@property (nonatomic) BOOL streamingMode;
@property (nonatomic) long long revision;
@property (nonatomic) BOOL skipLastLevel;
@property (nonatomic) BOOL adaptationLayerOnly;
@property (nonatomic) BOOL legacyNormalization;
@property (nonatomic) unsigned int outputPixelFormat;
@property (nonatomic) unsigned int matchOutputDimensions;
@property (nonatomic) BOOL useE5RT;
@property (retain, nonatomic) NSString *e5Model;
@property (nonatomic) BOOL bypassInputNormalization;

- (id)init;
- (void).cxx_destruct;

@end
