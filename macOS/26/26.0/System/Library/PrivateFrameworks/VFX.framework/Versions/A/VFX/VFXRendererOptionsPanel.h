@class VFXRendererOptionsPanelController;

@interface VFXRendererOptionsPanel : NSPanel {
    VFXRendererOptionsPanelController *_controller;
}

+ (id)rendererOptionsPanelForView:(id)a0;

- (id)controller;
- (void)setController:(id)a0;
- (void)open;
- (BOOL)canBecomeKeyWindow;
- (void)close;
- (void).cxx_destruct;
- (BOOL)canBecomeMainWindow;

@end
