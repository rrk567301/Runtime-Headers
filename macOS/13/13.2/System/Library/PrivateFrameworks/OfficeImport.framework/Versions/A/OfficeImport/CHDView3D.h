@interface CHDView3D : NSObject {
    int mRotationX;
    int mRotationY;
    int mDepthPercent;
    int mGapDepthPercent;
    int mHeightPercent;
    int mPerspective;
    BOOL mRightAngleAxes;
    BOOL mCluster;
    BOOL mAutoscale;
}

- (id)description;
- (id)init;
- (int)rotationY;
- (void)setRotationY:(int)a0;
- (int)rotationX;
- (void)setRotationX:(int)a0;
- (int)depthPercent;
- (void)setDepthPercent:(int)a0;
- (int)gapDepthPercent;
- (void)setGapDepthPercent:(int)a0;
- (int)heightPercent;
- (void)setHeightPercent:(int)a0;
- (int)perspective;
- (void)setPerspective:(int)a0;
- (BOOL)isRightAngleAxes;
- (void)setRightAngleAxes:(BOOL)a0;
- (BOOL)isCluster;
- (void)setCluster:(BOOL)a0;
- (BOOL)isAutoscale;
- (void)setAutoscale:(BOOL)a0;

@end
