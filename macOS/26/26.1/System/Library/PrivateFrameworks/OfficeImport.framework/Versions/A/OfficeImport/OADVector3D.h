@interface OADVector3D : NSObject <NSCopying> {
    float mDx;
    float mDy;
    float mDz;
}

- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (float)dx;
- (float)dy;
- (float)dz;
- (id)initWithDx:(float)a0 dy:(float)a1 dz:(float)a2;

@end
