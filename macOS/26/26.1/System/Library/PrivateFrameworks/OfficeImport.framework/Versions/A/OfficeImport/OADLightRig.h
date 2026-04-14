@class OADRotation3D;

@interface OADLightRig : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mType;
    int mDirection;
}

- (int)type;
- (int)direction;
- (id)rotation;
- (unsigned long long)hash;
- (void)setRotation:(id)a0;
- (void)setType:(int)a0;
- (id)description;
- (void)setDirection:(int)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
