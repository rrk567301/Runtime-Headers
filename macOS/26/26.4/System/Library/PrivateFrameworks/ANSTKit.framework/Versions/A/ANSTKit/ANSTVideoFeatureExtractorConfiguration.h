@interface ANSTVideoFeatureExtractorConfiguration : ANSTConfiguration

@property (nonatomic) unsigned long long foundationModelVersion;
@property (readonly, nonatomic) unsigned long long version;

+ (unsigned long long)foundationModelVersionOfFeatureExtractorVersion:(unsigned long long)a0;

- (id)initWithVersion:(unsigned long long)a0;
- (id)init;
- (id)description;

@end
