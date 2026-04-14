@class NSArray, FMFMapViewController, NSString;

@interface SOMapViewController : NSViewController <FMFMapViewControllerDelegate>

@property (retain) FMFMapViewController *fmfViewController;
@property (copy) NSArray *trackedIMHandles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)_windowWillClose:(id)a0;
- (void)_windowOcclusionStateDidChange:(id)a0;
- (void)fmfMapViewController:(id)a0 didSelectHandle:(id)a1;
- (id)annotationImageForHandle:(id)a0;
- (void)_setupFMFMapViewController;
- (void)_cleanFMFMapViewController;
- (void)selectHandle:(id)a0;
- (void)recenterLocation;
- (void)updateRefreshState;
- (void)_activateLocation;
- (void)_deactivateLocation;
- (void)updateTrackedIMHandles:(id)a0;
- (id)annotationABRecordForHandle:(id)a0;

@end
