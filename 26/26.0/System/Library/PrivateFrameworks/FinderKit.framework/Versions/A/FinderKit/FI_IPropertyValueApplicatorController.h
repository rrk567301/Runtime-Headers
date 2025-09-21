@class FI_IPropertyValueApplicator;

@interface FI_IPropertyValueApplicatorController : FI_IPropertyValueController {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct TFENode *__cap_; } _nodes;
}

@property (retain, nonatomic) FI_IPropertyValueApplicator *valueApplicator;

- (id).cxx_construct;
- (void).cxx_destruct;
- (const void *)nodes;
- (BOOL)canModifyNodes:(const void *)a0;
- (void)nodesWillChange;
- (int)applyValueToNodes:(id)a0;
- (void)nodesDidChange;
- (void)setCanModifyNodesGetter:(const void *)a0;
- (void)setValueToNodesApplicator:(const void *)a0;
- (void)updateWithNodes:(const void *)a0;

@end
