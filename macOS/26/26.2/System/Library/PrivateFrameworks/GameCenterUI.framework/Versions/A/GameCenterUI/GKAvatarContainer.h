@protocol GKAvatarContainerDelegate;

@interface GKAvatarContainer : NSView

@property (weak, nonatomic) id<GKAvatarContainerDelegate> delegate;
@property (nonatomic) BOOL isDisplayingDeleteAvatarAlert;

- (void)mouseEntered:(id)a0;
- (void)viewDidMoveToWindow;
- (void)updateLayer;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didSelectToDeleteAvatar;

@end
