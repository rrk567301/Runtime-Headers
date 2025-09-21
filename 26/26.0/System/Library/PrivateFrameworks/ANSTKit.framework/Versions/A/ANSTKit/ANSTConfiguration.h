@interface ANSTConfiguration : NSObject

@property (readonly, nonatomic) unsigned long long version;
@property (nonatomic) long long networkEngineType;
@property (nonatomic) unsigned int qualityOfService;

+ (id)new;

- (id)initWithVersion:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;

@end
