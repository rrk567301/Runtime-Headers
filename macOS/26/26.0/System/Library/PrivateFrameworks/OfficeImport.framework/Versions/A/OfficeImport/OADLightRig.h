@class OADRotation3D;

@interface OADLightRig : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}

- (int)direction;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)rotation;
- (int)type;
- (void)setDirection:(int)a0;
- (id)init;
- (void)setType:(int)a0;
- (id)description;
- (void)setRotation:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
