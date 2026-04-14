@class UINSSceneView, NSData, NSMutableArray;

@interface UINSTouchAlternativesConfigurationView : NSView {
    NSMutableArray *_modules;
    id /* block */ _configCompletionHandler;
}

@property (weak) UINSSceneView *sceneView;
@property (copy) NSData *modulesConfiguration;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endGameModeOverlay;
- (void)configureTilt;
- (void)addGameModule:(id)a0;
- (void)_reinitializeSubviews;
- (void)removeModule:(id)a0;
- (void)beginConfigurationOverlayWithCompletionHandler:(id /* block */)a0;

@end
