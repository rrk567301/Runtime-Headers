@class OADPoint3D, OADVector3D;

@interface OADBackdrop : NSObject <NSCopying> {
    OADPoint3D *mAnchor;
    OADVector3D *mNormal;
    OADVector3D *mUp;
}

- (void)setAnchor:(id)a0;
- (id)anchor;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)normal;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)up;
- (void)setNormal:(id)a0;
- (void)setUp:(id)a0;

@end
