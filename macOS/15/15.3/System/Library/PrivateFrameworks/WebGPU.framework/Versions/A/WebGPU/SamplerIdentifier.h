@interface SamplerIdentifier : NSObject <NSCopying>

@property (nonatomic) unsigned long long first;
@property (nonatomic) unsigned long long second;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFirst:(unsigned long long)a0 second:(unsigned long long)a1;

@end
