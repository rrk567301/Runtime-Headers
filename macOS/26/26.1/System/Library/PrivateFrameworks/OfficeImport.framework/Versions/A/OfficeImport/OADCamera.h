@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}

- (float)zoom;
- (void)setFieldOfView:(float)a0;
- (id)rotation;
- (float)fieldOfView;
- (unsigned long long)hash;
- (void)setRotation:(id)a0;
- (void)setZoom:(float)a0;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (int)cameraType;
- (id)init;
- (void)setCameraType:(int)a0;

@end
