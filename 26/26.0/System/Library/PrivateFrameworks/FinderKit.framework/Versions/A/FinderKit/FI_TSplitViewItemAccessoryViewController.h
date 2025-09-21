@class NSViewController;

@interface FI_TSplitViewItemAccessoryViewController : NSSplitViewItemAccessoryViewController

@property (retain, nonatomic) NSViewController *wrappedController;

- (void)loadView;
- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (id)representedObject;

@end
