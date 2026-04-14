@interface FMWeakWrapper : NSObject <NSCopying>

@property (weak, nonatomic) id object;
@property (nonatomic) unsigned long long objectHash;

- (id)initWithObject:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
