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
- (id)drawingTheme;
- (id)styleMatrix;
- (id)fontScheme;
- (id)themeOverrides;
- (void)doneWithContent;
- (id)defaultTextListStyle;
- (BOOL)showMasterPlaceholderAnimations;
- (void)setShowMasterPlaceholderAnimations:(BOOL)a0;
- (BOOL)showMasterShapes;
- (void)setShowMasterShapes:(BOOL)a0;
- (id)colorMapOverride;
- (void)setColorMapOverride:(id)a0;

@end
