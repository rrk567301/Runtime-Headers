@protocol GKAvatarContainerDelegate;

@interface GKAvatarContainer : NSView

@property (weak, nonatomic) id<GKAvatarContainerDelegate> delegate;
@property (nonatomic) BOOL isDisplayingDeleteAvatarAlert;

- (void)dealloc;
- (void).cxx_destruct;
- (void)updateLayer;
- (void)viewDidMoveToWindow;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)didSelectToDeleteAvatar;

@end
