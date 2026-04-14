@interface OADRotation3D : NSObject <NSCopying> {
    float mLatitude;
    float mLongitude;
    float mRevolution;
}

- (float)latitude;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (float)longitude;
- (id)description;
- (id)initWithLatitude:(float)a0 longitude:(float)a1 revolution:(float)a2;
- (float)revolution;

@end
