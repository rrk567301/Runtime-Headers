@class OADRotation3D;

@interface OADLightRig : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}

- (id)rotation;
- (void)setRotation:(id)a0;
- (void)setType:(int)a0;
- (int)direction;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setDirection:(int)a0;
- (int)type;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
