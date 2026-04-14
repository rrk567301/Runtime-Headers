@class OADPoint3D, OADVector3D;

@interface OADBackdrop : NSObject <NSCopying> {
    OADPoint3D *mAnchor;
    OADVector3D *mNormal;
    OADVector3D *mUp;
}

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)anchor;
- (void)setAnchor:(id)a0;
- (id)up;
- (void)setUp:(id)a0;
- (id)normal;
- (void)setNormal:(id)a0;

@end
