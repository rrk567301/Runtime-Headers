@interface FI_TTouchBarScrollingStackViewController : FI_TTouchBarViewController {
    struct TFENodeVector { struct TFENode *__begin_; struct TFENode *__end_; struct { struct TFENode *__cap_; } ; } _targetNodes;
    struct optional<CGPoint> { union { char __null_state_; struct CGPoint { double x; double y; } __val_; } ; BOOL __engaged_; } _cachedScrollPosition;
}

@property (nonatomic) BOOL disableCachedScrollPosition;

- (void)viewWillDisappear;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)viewWillAppear;
- (void)setTargetNodes:(const void *)a0;
- (id)makeTouchBarView;
- (const void *)targetNodes;

@end
