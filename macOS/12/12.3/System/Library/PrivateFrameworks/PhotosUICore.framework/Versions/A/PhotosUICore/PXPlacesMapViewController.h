@class PXPlacesMapController, NSString, PKExtendedTraitCollection;

@interface PXPlacesMapViewController : UXViewController <PXChangeObserver, PXPlacesMapControllerAccess>

@property (retain, nonatomic) PXPlacesMapController *mapController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PKExtendedTraitCollection *pk_extendedTraitCollection;

- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)_commonInit;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)sendTraitNotification;

@end
