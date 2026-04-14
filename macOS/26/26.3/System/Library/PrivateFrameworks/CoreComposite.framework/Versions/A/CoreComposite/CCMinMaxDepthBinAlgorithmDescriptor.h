@interface CCMinMaxDepthBinAlgorithmDescriptor : CCAlgorithmDescriptor

@property (readonly, nonatomic) long long orfPassMode;
@property (readonly, nonatomic) long long downSamplingFactor;
@property (readonly, nonatomic) BOOL binMinDepth;

- (id)initWithDescriptor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
