@class SCNNode;

@interface OZPerson3DSCNSceneBuilder : NSObject {
    struct map<unsigned long, SCNNode *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, SCNNode *>>> { struct __tree<std::__value_type<unsigned long, SCNNode *>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, SCNNode *>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, SCNNode *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, SCNNode *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, SCNNode *>, std::less<unsigned long>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _jointNodeMap;
    struct map<unsigned long, SCNNode *, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, SCNNode *>>> { struct __tree<std::__value_type<unsigned long, SCNNode *>, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, SCNNode *>, std::less<unsigned long>, true>, std::allocator<std::__value_type<unsigned long, SCNNode *>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<unsigned long, SCNNode *>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<unsigned long, std::__value_type<unsigned long, SCNNode *>, std::less<unsigned long>, true>> { unsigned long long __value_; } __pair3_; } __tree_; } _limbNodeMap;
    unsigned long long _geometryMode;
    SCNNode *_rootNode;
}

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id).cxx_construct;
- (void)setOpacity:(float)a0;
- (void)setMass:(float)a0;
- (void)setFriction:(float)a0;
- (void)updateGeometry;
- (id)getRootNode;
- (void)buildPersonGeometry:(id)a0;
- (void)runOnAllBodyGeometry:(id /* block */)a0;
- (void)setTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 node:(id)a1;
- (id)newNodeForJoint:(unsigned long long)a0;
- (void)addNode:(id)a0 joint:(unsigned long long)a1 node:(id)a2;
- (struct { void /* unknown type, empty encoding */ x0[4]; })defaultTransform:(unsigned long long)a0;
- (id)newNodeForLimb:(unsigned long long)a0;
- (void)addNode:(id)a0 limb:(unsigned long long)a1 node:(id)a2;
- (id)newRoundCylinderForRoot;
- (void)enablePhysics:(BOOL)a0;
- (void)setTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 forJoint:(unsigned long long)a1;
- (void)updateSimpleGeometry:(float)a0;
- (struct SCNMatrix4Pair { struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x0; struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; } x1; })getJointTransformsForLimb:(unsigned long long)a0;
- (void)updateConeLimbGeometry:(id)a0 upperRadius:(float)a1 lowerRadius:(float)a2 length:(float)a3;
- (void)updateCylinderLimbGeometry:(id)a0 length:(float)a1;

@end
