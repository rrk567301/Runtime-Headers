@class SCNRendererOptionsPanelController;

@interface SCNRendererOptionsPanel : NSPanel {
    SCNRendererOptionsPanelController *_controller;
}

+ (void)recordGraphInView:(id)a0;
+ (id)rendererOptionsPanelForView:(id)a0;

- (BOOL)canBecomeKeyWindow;
- (void)setController:(id)a0;
- (id)controller;
- (void)close;
- (void)open;
- (void).cxx_destruct;
- (BOOL)canBecomeMainWindow;

@end
