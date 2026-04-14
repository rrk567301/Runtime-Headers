@interface IKViewController : NSViewController

@property BOOL isLoaded;

- (void)invalidateContents;
- (void)loadView;
- (void)didBecomeVisible;

@end
