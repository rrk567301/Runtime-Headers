@interface IKViewController : NSViewController

@property char isLoaded;

- (void)loadView;
- (void)invalidateContents;
- (void)didBecomeVisible;

@end
