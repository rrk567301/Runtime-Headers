@interface ANSTISPAlgorithmConfiguration : ANSTConfiguration

@property (readonly, nonatomic) unsigned long long version;
@property (nonatomic) char enableObjectTracking;
@property (nonatomic) char enableSegmentation;
@property (nonatomic) long long networkResolution;
@property (nonatomic) long long runningFrameRate;

- (id)description;
- (id)init;
- (id)initWithVersion:(unsigned long long)a0;

@end
