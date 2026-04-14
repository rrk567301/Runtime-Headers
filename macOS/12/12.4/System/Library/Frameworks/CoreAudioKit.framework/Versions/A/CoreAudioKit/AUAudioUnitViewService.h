@class NSViewController, NSArray, AURemoteExtensionContext, NSWindow;

@interface AUAudioUnitViewService : NSServiceViewController {
    NSViewController *_auViewController;
    BOOL _auViewRetrieved;
    BOOL _preferredSizeSent;
    NSArray *_horizontal;
    NSArray *_vertical;
}

@property AURemoteExtensionContext *auRemoteExtensionContext;
@property (retain, nonatomic) NSWindow *_window;

- (void)dealloc;
- (void).cxx_destruct;
- (void)loadView;
- (void)keyDown:(id)a0;
- (void)viewWillAppear;
- (void)keyUp:(id)a0;
- (BOOL)remoteViewSizeChanged:(struct CGSize { double x0; double x1; })a0 transaction:(id)a1;
- (id)remoteViewControllerInterface;
- (unsigned long long)awakeFromRemoteView;
- (void)resizeAUView:(struct CGSize { double x0; double x1; })a0;
- (void)resizeAUContainer:(struct CGSize { double x0; double x1; })a0;
- (void)markViewForRedraw:(id)a0;
- (void)sendInitialSize;
- (struct CGSize { double x0; double x1; })determineViewSize:(id)a0;
- (void)resizeWindow:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)setAUContainerViewConstraints:(id)a0 childView:(id)a1 auViewSize:(struct CGSize { double x0; double x1; })a2;
- (void)initializeBlankView;
- (void)connectChildView;
- (void)sendEventToHost:(id)a0;

@end
