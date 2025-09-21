@class OADThemeOverrides, OADColorMap;

@interface PDSlideChild : PDSlideBase {
    char mShowMasterPlaceholderAnimations;
    char mShowMasterShapes;
    OADThemeOverrides *mThemeOverrides;
    OADColorMap *mColorMapOverride;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)colorMap;
- (id)colorScheme;
- (void)doneWithContent;
- (char)showMasterPlaceholderAnimations;
- (id)colorMapOverride;
- (id)defaultTextListStyle;
- (id)drawingTheme;
- (id)fontScheme;
- (void)setColorMapOverride:(id)a0;
- (void)setShowMasterPlaceholderAnimations:(char)a0;
- (void)setShowMasterShapes:(char)a0;
- (char)showMasterShapes;
- (id)styleMatrix;
- (id)themeOverrides;

@end
