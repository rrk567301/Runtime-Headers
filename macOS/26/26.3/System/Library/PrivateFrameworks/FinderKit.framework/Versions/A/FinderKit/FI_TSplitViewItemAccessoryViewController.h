@class NSViewController;

@interface FI_TSplitViewItemAccessoryViewController : NSSplitViewItemAccessoryViewController

@property (retain, nonatomic) NSViewController *wrappedController;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)setRepresentedObject:(id)a0;
- (id)representedObject;

@end
