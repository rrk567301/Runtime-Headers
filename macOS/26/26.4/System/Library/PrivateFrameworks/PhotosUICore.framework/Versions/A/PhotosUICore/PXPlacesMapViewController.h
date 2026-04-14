@class PXPlacesMapController;

@interface PXPlacesMapViewController : UXViewController

@property (retain, nonatomic) PXPlacesMapController *mapController;

- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
