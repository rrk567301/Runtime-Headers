@class SCNRendererOptionsPanelController;

@interface SCNRendererOptionsPanel : NSPanel {
    SCNRendererOptionsPanelController *_controller;
}

+ (void)recordGraphInView:(id)a0;
+ (id)rendererOptionsPanelForView:(id)a0;

- (void).cxx_destruct;
- (void)close;
- (void)open;
- (char)canBecomeKeyWindow;
- (char)canBecomeMainWindow;
- (id)controller;
- (void)setController:(id)a0;

@end
