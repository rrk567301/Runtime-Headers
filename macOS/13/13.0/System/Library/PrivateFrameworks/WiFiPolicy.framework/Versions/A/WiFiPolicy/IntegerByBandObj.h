@interface IntegerByBandObj : NSObject <NSCopying>

@property (nonatomic) struct { long long valueByBand[2]; BOOL valid[2]; } candidateSet;

+ (id)integerByBandWith:(struct { long long x0[2]; BOOL x1[2]; })a0;
+ (id)integerByBandWith:(struct { long long x0[2]; BOOL x1[2]; })a0 withCap:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
