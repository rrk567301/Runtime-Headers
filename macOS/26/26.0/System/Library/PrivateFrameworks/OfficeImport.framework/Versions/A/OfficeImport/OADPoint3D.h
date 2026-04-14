@interface OADPoint3D : NSObject <NSCopying> {
    float mX;
    float mY;
    float mZ;
}

- (float)z;
- (float)y;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (float)x;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithX:(float)a0 y:(float)a1 z:(float)a2;

@end
