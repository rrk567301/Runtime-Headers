@class SCNRendererOptionsPanelController;

@interface SCNRendererOptionsPanel : NSPanel {
    SCNRendererOptionsPanelController *_controller;
}

+ (void)recordGraphInView:(id)a0;
+ (id)rendererOptionsPanelForView:(id)a0;

- (BOOL)canBecomeKeyWindow;
- (void)open;
- (void)close;
- (void)setController:(id)a0;
- (id)controller;
- (void).cxx_destruct;
- (BOOL)canBecomeMainWindow;

@end
