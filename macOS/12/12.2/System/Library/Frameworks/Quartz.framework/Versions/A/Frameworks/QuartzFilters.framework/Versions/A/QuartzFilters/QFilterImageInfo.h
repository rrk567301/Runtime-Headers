@interface QFilterImageInfo : NSObject <NSCopying>

@property double scalingFactor;
@property unsigned int maxSize;
@property unsigned int minSize;
@property unsigned int resolution;
@property unsigned int scalingQuality;
@property int overrideInterpolate;
@property int overrideCompression;
@property double quality;
@property int convolution;
@property unsigned int radius;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)init;
- (void)reset;

@end
