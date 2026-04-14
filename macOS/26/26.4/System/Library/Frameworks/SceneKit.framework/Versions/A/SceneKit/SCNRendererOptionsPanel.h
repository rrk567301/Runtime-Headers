@class SCNRendererOptionsPanelController;

@interface SCNRendererOptionsPanel : NSPanel {
    SCNRendererOptionsPanelController *_controller;
}

+ (void)recordGraphInView:(id)a0;
+ (id)rendererOptionsPanelForView:(id)a0;

- (void)open;
- (void)setController:(id)a0;
- (id)controller;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (void)close;
- (BOOL)canBecomeMainWindow;

@end
