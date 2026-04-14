@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}

- (int)cameraType;
- (id)rotation;
- (float)fieldOfView;
- (void)setRotation:(id)a0;
- (void)setZoom:(float)a0;
- (float)zoom;
- (id)description;
- (id)init;
- (void)setFieldOfView:(float)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setCameraType:(int)a0;

@end
