@class PKExtendedTraitCollection, NSString, PXPlacesMapController;

@interface PXPlacesMapViewController : UXViewController <PXChangeObserver, PXPlacesMapControllerAccess>

@property (retain, nonatomic) PXPlacesMapController *mapController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PKExtendedTraitCollection *pk_extendedTraitCollection;
@property (readonly, nonatomic) PXPlacesMapViewController *mapViewController;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillAppear:(char)a0;
- (void)viewDidAppear:(char)a0;
- (void)viewDidDisappear:(char)a0;
- (void)viewWillDisappear:(char)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)sendTraitNotification;

@end
