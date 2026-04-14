@interface ANSTForegroundSegmentationConfiguration : ANSTConfiguration

@property (nonatomic) long long networkResolution;
@property (readonly, nonatomic) unsigned long long version;

- (id)initWithVersion:(unsigned long long)a0;
- (id)description;
- (id)init;

@end
