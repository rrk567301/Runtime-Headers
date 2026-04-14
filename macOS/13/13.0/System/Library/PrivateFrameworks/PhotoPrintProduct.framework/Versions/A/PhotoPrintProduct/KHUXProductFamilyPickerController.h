@class KHUXProductFamilyPickerView, UXBarButtonItem, KHPrintsProjectBundleController;

@interface KHUXProductFamilyPickerController : UXViewController {
    unsigned long long _viewDidAppearCalls;
    id _observer;
}

@property (readonly, nonatomic) KHUXProductFamilyPickerView *pickerView;
@property (readonly, nonatomic) UXBarButtonItem *cancelButtonItem;
@property (readonly, nonatomic) UXBarButtonItem *helpButtonItem;
@property (nonatomic) Class productItemClass;
@property (nonatomic) BOOL compactMode;
@property (readonly, nonatomic) KHPrintsProjectBundleController *projectBundleController;
@property (copy, nonatomic) id /* block */ productSubgroupSelectionHandler;
@property (copy, nonatomic) id /* block */ addPhotosRequestHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;

+ (Class)viewClass;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelOperation:(id)a0;
- (void)viewWillLayout;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (void)showHelp:(id)a0;
- (id)initWithProjectBundleController:(id)a0;
- (void)updateCompactMode;
- (id)controllerForProductFamilyView:(id)a0;
- (void)updateFamilyViewControllerCountryCodes;
- (void)openFamilyViewControllersAnimated:(BOOL)a0;
- (void)closeFamilyViewControllersAnimated:(BOOL)a0;
- (void)updateProducts;
- (void)observeStoreFrontChanges;
- (void)unobserveStoreFrontChanges;
- (void)_alertWithError:(id)a0 inWindow:(id)a1 completionHandler:(id /* block */)a2;
- (void)selectProductSubgroup:(id)a0;

@end
