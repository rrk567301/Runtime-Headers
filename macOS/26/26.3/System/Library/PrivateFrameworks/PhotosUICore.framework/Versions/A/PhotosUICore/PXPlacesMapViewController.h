@class PXPlacesMapController;

@interface PXPlacesMapViewController : UXViewController

@property (retain, nonatomic) PXPlacesMapController *mapController;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;

@end
