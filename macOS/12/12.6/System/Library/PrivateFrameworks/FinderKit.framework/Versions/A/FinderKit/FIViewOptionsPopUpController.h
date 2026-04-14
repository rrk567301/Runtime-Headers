@class FIContainerController, NSValue;

@interface FIViewOptionsPopUpController : FI_TViewController {
    struct TNSWeakPtr<FIContainerController, void> { NSValue *fWeakObject; } _weakContainerController;
}

@property (nonatomic) int viewStyle;
@property (nonatomic) BOOL inSavePanel;
@property (weak) FIContainerController *containerController;

+ (id)imageForViewStyle:(int)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)configureView;
- (id)containerController;
- (void)configureMenu;
- (void)updateViewOptionsMenuIcon;
- (void)setContainerController:(id)a0;

@end
