@interface FMWeakWrapper : NSObject <NSCopying>

@property (weak, nonatomic) id object;
@property (nonatomic) unsigned long long objectHash;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;

@end
