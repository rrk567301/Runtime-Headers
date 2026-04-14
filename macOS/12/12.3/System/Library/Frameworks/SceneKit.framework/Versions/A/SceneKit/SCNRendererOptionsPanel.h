@class SCNRendererOptionsPanelController;

@interface SCNRendererOptionsPanel : NSPanel {
    SCNRendererOptionsPanelController *_controller;
}

+ (id)rendererOptionsPanelForView:(id)a0;
+ (void)recordGraphInView:(id)a0;

- (void)open;
- (void)close;
- (void).cxx_destruct;
- (id)controller;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (void)setController:(id)a0;

@end
