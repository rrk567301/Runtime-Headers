@class OADRotation3D;

@interface OADCamera : NSObject <NSCopying> {
    OADRotation3D *mRotation;
    int mCameraType;
    float mFieldOfView;
    float mZoom;
}

- (void)setRotation:(id)a0;
- (id)rotation;
- (float)fieldOfView;
- (void)setZoom:(float)a0;
- (float)zoom;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setFieldOfView:(float)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (int)cameraType;
- (void)setCameraType:(int)a0;

@end
