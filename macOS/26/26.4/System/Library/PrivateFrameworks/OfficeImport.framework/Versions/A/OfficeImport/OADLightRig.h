@class OADRotation3D;

@interface OADLightRig : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}

- (void)setRotation:(id)a0;
- (id)rotation;
- (int)direction;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setType:(int)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (int)type;
- (id)init;
- (id)description;
- (void)setDirection:(int)a0;

@end
