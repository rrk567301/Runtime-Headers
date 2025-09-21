@protocol TUGameOverlayControllerDelegate;

@interface TUGameOverlayController : NSObject

@property (nonatomic) int gameOverlayVisibilityChangedNotificationToken;
@property (weak, nonatomic) id<TUGameOverlayControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL overlayOpen;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
