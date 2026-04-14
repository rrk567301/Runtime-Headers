@interface FMWeakWrapper : NSObject <NSCopying>

@property (weak, nonatomic) id object;
@property (nonatomic) unsigned long long objectHash;

- (id)initWithObject:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
