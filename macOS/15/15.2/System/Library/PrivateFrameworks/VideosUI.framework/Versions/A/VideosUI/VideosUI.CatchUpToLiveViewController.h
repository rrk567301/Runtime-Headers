@interface VideosUI.CatchUpToLiveViewController : VideosUI.VUIViewController <VUIMediaInfoFullscreenTransfer> {
    void /* unknown type, empty encoding */ index;
    void /* unknown type, empty encoding */ viewModels;
    void /* unknown type, empty encoding */ clipItems;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ keyPlayFetchTask;
    void /* unknown type, empty encoding */ timeObserverToken;
    void /* unknown type, empty encoding */ metadataView;
    void /* unknown type, empty encoding */ isPIPEnteringFullscreen;
    void /* unknown type, empty encoding */ jumpToLiveOnPageChange;
    void /* unknown type, empty encoding */ fetchController;
    void /* unknown type, empty encoding */ mediaController;
    void /* unknown type, empty encoding */ playableDataSource;
    void /* unknown type, empty encoding */ nextToken;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)vui_viewDidLoad;
- (BOOL)canTransferMediaInfo:(id)a0 toFullscreen:(BOOL)a1;
- (void)vui_didMoveToParentViewController:(id)a0;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vui_viewDidLayoutSubviews;

@end
