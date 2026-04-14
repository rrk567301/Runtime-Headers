@interface SKTransformNode : SKNode {
    void *_skcTransformLayer;
    void /* unknown type, empty encoding */ _euler;
}

@property (nonatomic) double xRotation;
@property (nonatomic) double yRotation;

- (void)setQuaternion:(struct { })a0;
- (struct { })quaternion;
- (struct { void /* unknown type, empty encoding */ x0[3]; })rotationMatrix;
- (void)setEulerAngles:(SEL)a0;
- (void /* unknown type, empty encoding */)eulerAngles;
- (double)zRotation;
- (void)setZRotation:(double)a0;
- (void)_didMakeBackingNode;
- (void *)_makeBackingNode;
- (void)setRotationMatrix:(struct { void /* unknown type, empty encoding */ x0[3]; })a0;

@end
