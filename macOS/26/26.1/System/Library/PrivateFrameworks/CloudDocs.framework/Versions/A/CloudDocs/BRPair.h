@interface BRPair : NSObject <NSCopying>

@property (readonly, nonatomic) id left;
@property (readonly, nonatomic) id right;

+ (id)pairWithLeft:(id)a0 andRight:(id)a1;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
