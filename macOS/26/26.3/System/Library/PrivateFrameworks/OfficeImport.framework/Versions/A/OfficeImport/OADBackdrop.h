@class OADPoint3D, OADVector3D;

@interface OADBackdrop : NSObject <NSCopying> {
    OADPoint3D *mAnchor;
    OADVector3D *mNormal;
    OADVector3D *mUp;
}

- (id)normal;
- (void)setAnchor:(id)a0;
- (id)anchor;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)up;
- (void)setNormal:(id)a0;
- (void)setUp:(id)a0;

@end
