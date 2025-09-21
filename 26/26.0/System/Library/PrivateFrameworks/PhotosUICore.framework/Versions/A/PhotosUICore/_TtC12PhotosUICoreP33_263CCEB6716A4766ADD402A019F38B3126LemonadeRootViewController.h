@class NSResponder, PXSelectionContainer;

@interface _TtC12PhotosUICoreP33_263CCEB6716A4766ADD402A019F38B3126LemonadeRootViewController : UXViewController <PXSelectionContainerProvider, PXActionProvider, NSObject> {
    void /* unknown type, empty encoding */ rootModel;
    void /* unknown type, empty encoding */ navigationContext;
    void /* unknown type, empty encoding */ photosSelection;
    void /* unknown type, empty encoding */ photosActionManager;
    void /* unknown type, empty encoding */ hostingResponder;
}

@property (nonatomic, weak) void /* function */ actionProviderDelegate;
@property (nonatomic, readonly) NSResponder *preferredFirstResponder;
@property (nonatomic, readonly) PXSelectionContainer *selectionContainer;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)selectionAnchorViewForAction:(SEL)a0;

@end
