@class SCNNode;

@interface SCNManipulableItem : NSObject {
    double _screenSize;
}

@property (retain, nonatomic) SCNNode *node;
@property (retain, nonatomic) id component;
@property (nonatomic) unsigned long long elementIndex;
@property (nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } transform;
@property (nonatomic) struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } worldTransform;
@property (readonly, nonatomic) struct SCNVector3 { double x0; double x1; double x2; } elementPosition;

+ (void)addItems:(id)a0 toScene:(id)a1;
+ (void)removeItemsFromScene:(id)a0;

- (struct SCNVector3 { double x0; double x1; double x2; })scale;
- (void)dealloc;
- (double)screenSize;
- (void)setPosition:(struct SCNVector3 { double x0; double x1; double x2; })a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)parentItem;
- (void)setScreenSize:(double)a0;
- (id)cloneForManipulators;
- (BOOL)isNodeManipulator;
- (void)validateClone;

@end
