@interface ICWeakObject : NSObject <NSCopying>

@property (nonatomic) unsigned long long cachedHash;
@property (readonly, weak, nonatomic) id object;

- (id)initWithObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;

@end
