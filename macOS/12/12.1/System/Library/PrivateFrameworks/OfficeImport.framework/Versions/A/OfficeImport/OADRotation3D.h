@interface OADRotation3D : NSObject <NSCopying> {
    float mLatitude;
    float mLongitude;
    float mRevolution;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (float)latitude;
- (float)longitude;
- (float)revolution;
- (id)initWithLatitude:(float)a0 longitude:(float)a1 revolution:(float)a2;

@end
