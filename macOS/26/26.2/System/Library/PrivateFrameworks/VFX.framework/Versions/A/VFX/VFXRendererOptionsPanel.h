@class VFXRendererOptionsPanelController;

@interface VFXRendererOptionsPanel : NSPanel {
    VFXRendererOptionsPanelController *_controller;
}

+ (id)rendererOptionsPanelForView:(id)a0;

- (id)controller;
- (void)setController:(id)a0;
- (void)open;
- (void)close;
- (void).cxx_destruct;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;

@end
