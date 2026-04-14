@protocol GKAvatarContainerDelegate;

@interface GKAvatarContainer : NSView

@property (weak, nonatomic) id<GKAvatarContainerDelegate> delegate;
@property (nonatomic) BOOL isDisplayingDeleteAvatarAlert;

- (void)updateLayer;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)didSelectToDeleteAvatar;

@end
