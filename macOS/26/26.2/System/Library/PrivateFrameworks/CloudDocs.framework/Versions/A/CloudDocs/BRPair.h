@interface BRPair : NSObject <NSCopying>

@property (readonly, nonatomic) id left;
@property (readonly, nonatomic) id right;

+ (id)pairWithLeft:(id)a0 andRight:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;

@end
