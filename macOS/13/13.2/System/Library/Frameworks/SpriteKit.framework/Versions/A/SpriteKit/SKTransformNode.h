@interface SKTransformNode : SKNode {
    void *_skcTransformLayer;
    void /* unknown type, empty encoding */ _euler;
}

@property (nonatomic) double xRotation;
@property (nonatomic) double yRotation;

- (void)setQuaternion:(struct { })a0;
- (struct { void /* unknown type, empty encoding */ x0[3]; })rotationMatrix;
- (struct { })quaternion;
- (void /* unknown type, empty encoding */)eulerAngles;
- (void)setEulerAngles:(SEL)a0;
- (double)zRotation;
- (void)setZRotation:(double)a0;
- (void)_didMakeBackingNode;
- (void *)_makeBackingNode;
- (void)setRotationMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;

@end
