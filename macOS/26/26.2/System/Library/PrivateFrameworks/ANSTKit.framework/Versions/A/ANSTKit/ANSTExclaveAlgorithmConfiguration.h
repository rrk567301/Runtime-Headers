@interface ANSTExclaveAlgorithmConfiguration : ANSTConfiguration

@property (readonly, nonatomic) unsigned long long version;
@property (nonatomic) long long networkResolution;

+ (id)new;

- (id)initWithVersion:(unsigned long long)a0;
- (id)description;
- (id)init;

@end
