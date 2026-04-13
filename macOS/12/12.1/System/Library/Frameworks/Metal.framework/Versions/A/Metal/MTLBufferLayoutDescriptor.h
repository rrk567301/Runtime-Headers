@interface MTLBufferLayoutDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long stride;
@property (nonatomic) unsigned long long stepFunction;
@property (nonatomic) unsigned long long stepRate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
