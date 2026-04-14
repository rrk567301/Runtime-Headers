@interface TTBulletTextAttributesCacheKey : NSObject

@property (nonatomic) unsigned long long hashValue;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTextFont:(id)a0 paragraphStyle:(id)a1 zoomFactor:(double)a2;

@end
