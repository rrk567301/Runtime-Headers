@class FI_TBrowserContainerController, NSString, FI_TContainerLayoutManager;

@interface FI_TBrowserContentViewController : FI_TViewController <TMarkTornDown> {
    struct TNSWeakPtr<FI_TBrowserContainerController> { FI_TBrowserContainerController *fWeakObject; } _weakBrowserContainerController;
}

@property (retain, nonatomic) FI_TContainerLayoutManager *containerLayoutManager;
@property (weak, nonatomic) FI_TBrowserContainerController *browserContainerController;
@property (getter=isTornDown) BOOL tornDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)aboutToTearDown;
- (void)addBrowserContainerView;
- (id)initWithContentView:(id)a0 containerLayoutManager:(id)a1;
- (BOOL)isInBrowseMode;
- (void)removeBrowserContainerView;

@end
