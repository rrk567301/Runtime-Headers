@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}

- (float)zoom;
- (id)rotation;
- (void)setRotation:(id)a0;
- (void)setZoom:(float)a0;
- (float)fieldOfView;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)setFieldOfView:(float)a0;
- (id)description;
- (int)cameraType;
- (id)init;
- (void)setCameraType:(int)a0;

@end
