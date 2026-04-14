@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)rotation;
- (void)setRotation:(id)a0;
- (float)zoom;
- (void)setZoom:(float)a0;
- (int)cameraType;
- (void)setCameraType:(int)a0;
- (float)fieldOfView;
- (void)setFieldOfView:(float)a0;

@end
