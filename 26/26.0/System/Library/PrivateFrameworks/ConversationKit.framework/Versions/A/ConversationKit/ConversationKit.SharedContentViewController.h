@interface ConversationKit.SharedContentViewController : PlatformViewController <CNKScreenSharingStateObserving, CNKSharedContentSourceInfoProviding, CNKFaceTimePiPSourceProviding, CNKSharedContentPippable> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isPaused;
    void /* unknown type, empty encoding */ isZoomEnabled;
    void /* unknown type, empty encoding */ isContentTransformEnabled;
    void /* unknown type, empty encoding */ participant;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ sharedContentView;
    void /* unknown type, empty encoding */ avatarImageQueue;
}

@property (nonatomic) BOOL isPipped;

- (void)viewDidLoad;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)init;
- (void)viewDidLayout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForRestoreAnimation;
- (void)getSharedContentSourceAvatarWithImageHandler:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })preferredPiPContentAspectRatio;
- (BOOL)restoreViewControllerHierarchyWhenExitingPiP;
- (void)screenSharingStateMonitorDidUpdateScreenInfoForParticipant:(id)a0;
- (id)sharedContentSourceName;
- (id)viewControllerForPiP;

@end
