@class NSViewController;

@interface AXSUIProxyViewController : NSViewController

@property (retain, nonatomic) NSViewController *wrapped;

- (void).cxx_destruct;
- (id)init;
- (id)makeController;

@end
