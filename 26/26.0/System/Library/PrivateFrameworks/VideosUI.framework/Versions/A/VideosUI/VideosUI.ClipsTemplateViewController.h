@interface VideosUI.ClipsTemplateViewController : VideosUI.VUIViewController {
    void /* unknown type, empty encoding */ pageContext;
    void /* unknown type, empty encoding */ previousSubtitle;
    void /* unknown type, empty encoding */ previousAlternateSubtitle;
    void /* unknown type, empty encoding */ playlistViewController;
    void /* unknown type, empty encoding */ collectionTitle;
    void /* unknown type, empty encoding */ collectionViewModel;
    void /* unknown type, empty encoding */ maxMovieContentRating;
    void /* unknown type, empty encoding */ maxTVContentRating;
    void /* unknown type, empty encoding */ allowsCellular;
    void /* unknown type, empty encoding */ ratioUpdateHandler;
    void /* unknown type, empty encoding */ paginateOffset;
    void /* unknown type, empty encoding */ serviceRequest;
    void /* unknown type, empty encoding */ appendContextDataRef;
    void /* unknown type, empty encoding */ contextDataRef;
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ document;
    void /* unknown type, empty encoding */ clipType;
    void /* unknown type, empty encoding */ trailersContextData;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)vui_viewDidLoad;
- (void)vui_viewDidAppear:(BOOL)a0;
- (void)vui_viewDidDisappear:(BOOL)a0;
- (void)vui_viewDidLayoutSubviews;

@end
