@interface FPPair : NSObject <NSCopying>

@property (retain, nonatomic) id first;
@property (retain, nonatomic) id second;

+ (id)pairWithFirst:(id)a0 second:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToPair:(id)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
