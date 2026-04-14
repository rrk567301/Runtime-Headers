@interface NSMutableAffineTransform : NSObject

+ (void)initialize;

- (float)scale;
- (void)bind:(id)a0 toObject:(id)a1 withKeyPath:(id)a2 options:(id)a3;
- (void)setScale:(float)a0;
- (id)affineTransform;
- (float)angle;
- (void)setAngle:(float)a0;
- (void)setStretch:(float)a0;
- (void)changeAffineTransform:(id)a0;
- (float)stretch;
- (void)setSkew:(float)a0;
- (float)skew;
- (void)setTX:(float)a0;
- (float)tX;
- (void)setTY:(float)a0;
- (float)tY;

@end
