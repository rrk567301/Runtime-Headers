@class SCNScene, SCNNode;

@interface SK3DNode : SKNode {
    void *_skc3DNode;
}

@property struct CGSize { double x0; double x1; } viewportSize;
@property (retain, nonatomic) SCNScene *scnScene;
@property (nonatomic) double sceneTime;
@property (getter=isPlaying) char playing;
@property (nonatomic) char loops;
@property (retain, nonatomic) SCNNode *pointOfView;
@property (nonatomic) char autoenablesDefaultLighting;

+ (char)supportsSecureCoding;
+ (id)nodeWithViewportSize:(struct CGSize { double x0; double x1; })a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)commonInit;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 options:(id)a1;
- (void /* unknown type, empty encoding */)unprojectPoint:(SEL)a0;
- (void /* unknown type, empty encoding */)projectPoint:(SEL)a0;
- (void)_renderForTime:(double)a0;
- (void)_didMakeBackingNode;
- (void *)_makeBackingNode;
- (void)_scnSceneDidUpdate:(id)a0;
- (id)initWithViewportSize:(struct CGSize { double x0; double x1; })a0;

@end
