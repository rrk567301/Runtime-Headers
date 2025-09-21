@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}

- (float)zoom;
- (float)fieldOfView;
- (void)setFieldOfView:(float)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)rotation;
- (id)init;
- (id)description;
- (int)cameraType;
- (void)setRotation:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setZoom:(float)a0;
- (void)setCameraType:(int)a0;

@end
