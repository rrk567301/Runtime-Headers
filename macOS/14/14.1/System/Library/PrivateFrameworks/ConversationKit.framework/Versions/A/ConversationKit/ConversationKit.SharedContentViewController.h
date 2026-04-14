@interface ConversationKit.SharedContentViewController : PlatformViewController <CNKFaceTimePiPSourceProviding, CNKSharedContentSourceInfoProviding, CNKScreenSharingStateObserving, CNKSharedContentPippable> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ participant;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ sharedContentView;
    void /* unknown type, empty encoding */ avatarImageQueue;
}

@property (nonatomic) void /* unknown type, empty encoding */ isPipped;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForRestoreAnimation;
- (void)getSharedContentSourceAvatarWithImageHandler:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })preferredPiPContentAspectRatio;
- (BOOL)restoreViewControllerHierarchyWhenExitingPiP;
- (void)screenSharingStateMonitorDidUpdateScreenInfoForParticipant:(id)a0;
- (id)sharedContentSourceName;
- (id)viewControllerForPiP;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLayout;
- (void)viewDidLoad;

@end
