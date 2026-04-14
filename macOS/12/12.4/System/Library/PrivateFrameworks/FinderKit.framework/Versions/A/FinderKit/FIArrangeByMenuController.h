@class FIContainerController, NSValue;

@interface FIArrangeByMenuController : FI_TArrangeByMenuController {
    BOOL _configuredArrangeByMenu;
    BOOL _configuredSortByMenu;
    struct TNSWeakPtr<FIContainerController, void> { NSValue *fWeakObject; } _weakContainerController;
}

@property (weak) FIContainerController *containerController;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)containerController;
- (void)setContainerController:(id)a0;
- (id)arrangeByMenu;
- (void)configureMenu:(id)a0 forArrange:(BOOL)a1;
- (id)sortByMenu;
- (id)initWithViewSettings:(id)a0 containerController:(id)a1;

@end
