@class OADCamera, OADLightRig, OADBackdrop;

@interface OADScene3D : NSObject <NSCopying> {
    OADCamera *mCamera;
    OADLightRig *mLightRig;
    OADBackdrop *mBackdrop;
}

+ (id)nullScene3D;

- (void)setBackdrop:(id)a0;
- (void)setCamera:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)camera;
- (id)init;
- (id)backdrop;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)lightRig;
- (void)setLightRig:(id)a0;

@end
