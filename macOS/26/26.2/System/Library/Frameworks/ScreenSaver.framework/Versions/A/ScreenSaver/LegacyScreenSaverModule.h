@interface LegacyScreenSaverModule : ScreenSaverModule

@property BOOL hasConfigurationSheet;
@property (copy) id /* block */ configureSheetCompletionBlock;

+ (void)setExtensionModule:(id)a0 isCompatibilityModule:(BOOL)a1;

- (id)init;
- (void)dealloc;
- (id)_extensionModule;
- (void)_requestDidCompleteNotification:(id)a0;
- (id)loadViewForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isPreview:(BOOL)a1;
- (void)presentConfigureSheetWithCompletionBlock:(id /* block */)a0;

@end
