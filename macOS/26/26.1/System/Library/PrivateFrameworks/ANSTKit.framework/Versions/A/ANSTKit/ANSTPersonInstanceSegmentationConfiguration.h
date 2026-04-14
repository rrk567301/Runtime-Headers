@interface ANSTPersonInstanceSegmentationConfiguration : ANSTConfiguration {
    unsigned long long _version;
}

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) long long networkResolution;

+ (id)new;

- (id)initWithVersion:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithVersion:(unsigned long long)a0 networkResolution:(long long)a1;

@end
