@interface ANSTVideoMaskRefinerHQConfiguration : ANSTConfiguration {
    unsigned long long _version;
}

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) long long networkResolution;

+ (id)new;

- (id)initWithVersion:(unsigned long long)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithVersion:(unsigned long long)a0 networkResolution:(long long)a1;

@end
