@interface TSKCOIdPlacementRearrangeOperation : TSKCOIdPlacementBaseOperation

- (int)placementType;
- (void)saveToArchiver:(id)a0 message:(void *)a1;
- (id)initWithAddress:(const void *)a0 fromIndex:(int)a1 toIndex:(int)a2 dominating:(char)a3 noop:(char)a4;
- (struct shared_ptr<TSKCO::AbstractOperation> { struct AbstractOperation *x0; struct __shared_weak_count *x1; })newTransformableOperation;

@end
