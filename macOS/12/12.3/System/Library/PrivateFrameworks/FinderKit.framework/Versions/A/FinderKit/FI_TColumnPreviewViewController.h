@class FI_TColumnQLPreviewViewController, NSValue;

@interface FI_TColumnPreviewViewController : FI_TBaseInfoWindowViewController {
    FI_TColumnQLPreviewViewController *_qlPreviewViewController;
    struct TNSWeakPtr<NSLayoutConstraint, void> { NSValue *fWeakObject; } _maxRelativeHeightConstraint;
    struct TNSWeakPtr<NSLayoutConstraint, void> { NSValue *fWeakObject; } _heightHintConstraint;
}

@property (nonatomic, getter=isApplicableToUI) BOOL applicableToUI;
@property (nonatomic) struct TFENode { struct OpaqueNodeRef *x0; } browserTargetNode;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)loadValueControllers;
- (void)targetNodesChanged;
- (void)updateRelativeHeightConstraintForView:(id)a0;

@end
