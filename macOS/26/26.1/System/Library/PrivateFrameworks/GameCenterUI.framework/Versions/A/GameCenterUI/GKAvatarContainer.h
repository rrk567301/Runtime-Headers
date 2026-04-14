@protocol GKAvatarContainerDelegate;

@interface GKAvatarContainer : NSView

@property (weak, nonatomic) id<GKAvatarContainerDelegate> delegate;
@property (nonatomic) BOOL isDisplayingDeleteAvatarAlert;

- (void)mouseExited:(id)a0;
- (void)viewDidMoveToWindow;
- (void)mouseEntered:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)updateLayer;
- (void)didSelectToDeleteAvatar;

@end
