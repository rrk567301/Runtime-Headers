@class OADCamera, OADLightRig, OADBackdrop;

@interface OADScene3D : NSObject <NSCopying> {
    OADCamera *mCamera;
    OADLightRig *mLightRig;
    OADBackdrop *mBackdrop;
}

+ (id)nullScene3D;

- (void)setCamera:(id)a0;
- (unsigned long long)hash;
- (id)camera;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (void)setBackdrop:(id)a0;
- (id)backdrop;
- (id)init;
- (id)lightRig;
- (void)setLightRig:(id)a0;

@end
