@interface ANSTActionDetectorConfiguration : ANSTConfiguration

@property (readonly, nonatomic) unsigned long long version;
@property (readonly, nonatomic) long long frameRate;

+ (id)new;

- (id)initWithVersion:(unsigned long long)a0;
- (id)init;
- (id)description;
- (id)initWithVersion:(unsigned long long)a0 frameRate:(long long)a1 error:(id *)a2;

@end
