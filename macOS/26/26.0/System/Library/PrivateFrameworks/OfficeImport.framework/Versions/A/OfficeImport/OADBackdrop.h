@class OADPoint3D, OADVector3D;

@interface OADBackdrop : NSObject <NSCopying> {
    OADPoint3D *mAnchor;
    OADVector3D *mNormal;
    OADVector3D *mUp;
}

- (id)anchor;
- (id)normal;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAnchor:(id)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)up;
- (void)setNormal:(id)a0;
- (void)setUp:(id)a0;

@end
