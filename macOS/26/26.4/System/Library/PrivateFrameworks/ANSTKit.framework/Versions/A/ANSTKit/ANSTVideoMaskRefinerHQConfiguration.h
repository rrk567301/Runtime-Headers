@interface ANSTVideoMaskRefinerHQConfiguration : ANSTConfiguration {
    unsigned long long _version;
}

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) long long networkResolution;

+ (id)new;

- (id)initWithVersion:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithVersion:(unsigned long long)a0 networkResolution:(long long)a1;

@end
