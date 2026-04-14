@class SCNRendererOptionsPanelController;

@interface SCNRendererOptionsPanel : NSPanel {
    SCNRendererOptionsPanelController *_controller;
}

+ (void)recordGraphInView:(id)a0;
+ (id)rendererOptionsPanelForView:(id)a0;

- (id)controller;
- (void)setController:(id)a0;
- (void)open;
- (BOOL)canBecomeKeyWindow;
- (void)close;
- (void).cxx_destruct;
- (BOOL)canBecomeMainWindow;

@end
