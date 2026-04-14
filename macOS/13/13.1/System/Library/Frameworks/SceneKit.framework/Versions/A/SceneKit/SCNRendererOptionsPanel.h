@class SCNRendererOptionsPanelController;

@interface SCNRendererOptionsPanel : NSPanel {
    SCNRendererOptionsPanelController *_controller;
}

+ (id)rendererOptionsPanelForView:(id)a0;
+ (void)recordGraphInView:(id)a0;

- (void)open;
- (void)close;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (id)controller;
- (void)setController:(id)a0;

@end
