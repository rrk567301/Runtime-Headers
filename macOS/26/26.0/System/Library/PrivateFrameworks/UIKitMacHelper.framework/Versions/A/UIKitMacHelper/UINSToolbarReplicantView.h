@class UIView;
@protocol UINSToolbarItemEngineHostingView_forUIKitMacHelper;

@interface UINSToolbarReplicantView : NSView <NSGlassAwareView> {
    UIView<UINSToolbarItemEngineHostingView_forUIKitMacHelper> *_replicatedView;
}

@property unsigned long long preferredGlassBehavior;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_configureRepresentationSizeFromCurrentAlignmentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_performWithCustomizationControlSizeUsingBlock:(id /* block */)a0;
- (id)initWithEngineHostingView:(id)a0;

@end
