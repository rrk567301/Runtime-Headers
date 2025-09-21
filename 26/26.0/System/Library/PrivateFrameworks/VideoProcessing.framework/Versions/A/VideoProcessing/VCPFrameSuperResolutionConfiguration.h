@class NSArray, NSDictionary, NSMutableArray, NSNumber;

@interface VCPFrameSuperResolutionConfiguration : NSObject

@property (class, readonly, nonatomic) long long maximumSupportedWidth;
@property (class, readonly, nonatomic) long long maximumSupportedHeight;
@property (class, readonly, nonatomic) long long minimumSupportedWidth;
@property (class, readonly, nonatomic) long long minimumSupportedHeight;

@property (retain, nonatomic) NSArray *supportedScaleFactors;
@property (retain, nonatomic) NSArray *supportedPixelFormats;
@property (retain, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (retain, nonatomic) NSDictionary *destinationPixelBufferAttributes;
@property (retain, nonatomic) NSMutableArray *configWithIndexArray;
@property (nonatomic) struct { float scalingFactor; long long matchedFileIndex; long long closestFileIndex; long long closestWidth; long long closestHeight; long long extendRight; long long extendBottom; } modelConfig;
@property (retain, nonatomic) NSNumber *scaleFactor;
@property (nonatomic) BOOL sessionStarted;
@property (nonatomic) long long sourceframeWidth;
@property (nonatomic) long long sourceframeHeight;

+ (id)supportedScaleFactorsForFrameWidth:(long long)a0 frameHeight:(long long)a1;
+ (BOOL)inSupportedRange:(long long)a0 configHeight:(long long)a1 scaleFactor:(float)a2;

- (void).cxx_destruct;
- (id)initWithFrameWidth:(long long)a0 sourceframeHeight:(long long)a1 scaleFactor:(float)a2;
- (id)parseConfigurationsFromFile:(id)a0 error:(id *)a1;

@end
