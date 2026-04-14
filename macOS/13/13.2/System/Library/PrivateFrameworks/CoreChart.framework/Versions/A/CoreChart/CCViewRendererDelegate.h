@class CCVegaRenderer;

@interface CCViewRendererDelegate : NSObject <CCViewRendererDelegateInterface>

@property (weak) CCVegaRenderer *vegaRenderer;

- (void).cxx_destruct;
- (void)loadURL:(id)a0 options:(id)a1 withCallback:(id)a2;
- (void)updateNativeView;
- (id)initWithVegaRenderer:(id)a0;

@end
