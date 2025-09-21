@protocol BWInferenceCropDescriptor;

@interface BWInferenceVideoFormatRequirements : BWVideoFormatRequirements

@property (nonatomic) char deviceOriented;
@property (nonatomic) int rotationDegrees;
@property (nonatomic) long long videoContentMode;
@property (nonatomic) char includesInvalidContent;
@property (retain, nonatomic) id<BWInferenceCropDescriptor> cropDescriptor;
@property (copy, nonatomic) id /* block */ histogramRequest;

- (void)dealloc;
- (id)initWithFormat:(id)a0;

@end
