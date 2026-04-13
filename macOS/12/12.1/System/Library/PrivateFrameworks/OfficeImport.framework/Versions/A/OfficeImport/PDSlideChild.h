@class OADThemeOverrides, OADColorMap;

@interface PDSlideChild : PDSlideBase {
    BOOL mShowMasterPlaceholderAnimations;
    BOOL mShowMasterShapes;
    OADThemeOverrides *mThemeOverrides;
    OADColorMap *mColorMapOverride;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)colorMap;
- (id)colorScheme;
- (id)styleMatrix;
- (id)fontScheme;
- (id)drawingTheme;
- (id)themeOverrides;
- (void)doneWithContent;
- (void)setColorMapOverride:(id)a0;
- (void)setShowMasterShapes:(BOOL)a0;
- (BOOL)showMasterShapes;
- (id)defaultTextListStyle;
- (id)colorMapOverride;
- (BOOL)showMasterPlaceholderAnimations;
- (void)setShowMasterPlaceholderAnimations:(BOOL)a0;

@end
