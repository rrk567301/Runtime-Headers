@interface ANSTLabelDetectionConfiguration : ANSTConfiguration

@property (readonly, nonatomic) unsigned long long version;
@property (nonatomic) long long networkResolution;
@property (nonatomic) long long runningFrameRate;

- (id)initWithVersion:(unsigned long long)a0;
- (id)init;
- (id)description;

@end
