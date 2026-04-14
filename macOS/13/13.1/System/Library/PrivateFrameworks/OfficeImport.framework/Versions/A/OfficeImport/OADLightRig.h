@class OADRotation3D;

@interface OADLightRig : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (int)type;
- (void)setType:(int)a0;
- (id)rotation;
- (void)setRotation:(id)a0;
- (int)direction;
- (void)setDirection:(int)a0;

@end
