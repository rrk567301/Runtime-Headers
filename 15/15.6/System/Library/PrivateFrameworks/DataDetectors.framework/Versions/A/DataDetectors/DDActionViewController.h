@class NSProgressIndicator, NSMapTable, NSRemoteView, NSURL, DDDataDetectorsViewHost, DDActionContext, DDButtonBar;
@protocol DDActionViewPresenter;

@interface DDActionViewController : NSViewController <NSRemoteViewDelegate> {
    struct __DDResult { } *_ddResult;
    NSURL *_url;
    char _local;
    char _isObserving;
    char _bridgeBurnt;
    char _presentationEndedSignaled;
    unsigned long long _actionType;
    DDDataDetectorsViewHost *_localViewController;
    NSMapTable *_localBridge;
    DDActionContext *_actionContext;
    DDButtonBar *_buttonBar;
    NSProgressIndicator *_spinner;
}

@property (retain) NSRemoteView *remoteView;
@property char local;
@property (weak) id<DDActionViewPresenter> presenter;
@property char editedContent;
@property char editionMode;
@property (readonly) char shouldRetainExportedObject;

+ (unsigned long long)typeForResult:(struct __DDResult { } *)a0;
+ (unsigned long long)typeForUrl:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (char)view:(id)a0 shouldResize:(struct CGSize { double x0; double x1; })a1;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidInvalidate:(id)a0;
- (char)viewShouldDragOldestAncestorWindow:(id)a0;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)_viewWillAppear;
- (void)_viewDidAppear;
- (void)_viewDidDisappear;
- (void)_viewDidLoad;
- (void)_viewWillDisappear;
- (void)burnViewBridge;
- (void)cleanAndSetContext:(id)a0;
- (void)commonRemoteViewControllerTeardown;
- (void)configureRunPhaseForBridge:(id)a0;
- (void)finalizeForBridge:(id)a0;
- (id)initWithType:(unsigned long long)a0 result:(struct __DDResult { } *)a1 context:(id)a2;
- (id)initWithType:(unsigned long long)a0 url:(id)a1 context:(id)a2;
- (void)runPhaseForLocalView:(id)a0 remoteView:(id)a1;
- (void)setupControls:(id)a0;
- (void)triggerControlWithIdentifier:(id)a0;

@end
