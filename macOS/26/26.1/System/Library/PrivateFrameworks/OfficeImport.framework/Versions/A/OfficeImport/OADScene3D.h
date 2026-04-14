@class OADCamera, OADLightRig, OADBackdrop;

@interface OADScene3D : NSObject <NSCopying> {
    OADCamera *mCamera;
    OADLightRig *mLightRig;
    OADBackdrop *mBackdrop;
}

+ (id)nullScene3D;

- (void)setCamera:(id)a0;
- (unsigned long long)hash;
- (void)setBackdrop:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)backdrop;
- (id)camera;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)lightRig;
- (void)setLightRig:(id)a0;

@end
