@class SCNText;

@interface OKWidgetSceneKitText : OKWidgetSceneKitGeometry {
    SCNText *_text;
}

+ (id)supportedSettings;

- (void)dealloc;
- (id)initWithSettings:(id)a0;
- (id)settingObjectForKey:(id)a0;
- (void)setUserSettingObject:(id)a0 forKey:(id)a1;
- (double)settingChamferRadius;
- (void)setSettingChamferRadius:(double)a0;
- (id)settingString;
- (void)setSettingString:(id)a0;
- (id)settingFont;
- (void)setSettingFont:(id)a0;
- (BOOL)settingWrapped;
- (void)setSettingWrapped:(BOOL)a0;
- (id)settingTruncationMode;
- (void)setSettingTruncationMode:(id)a0;
- (struct CGSize { double x0; double x1; })settingTextSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })settingContainerFrame;
- (void)setSettingContainerFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)settingAlignmentMode;
- (void)setSettingAlignmentMode:(id)a0;
- (double)settingExtrusionDepth;
- (void)setSettingExtrusionDepth:(double)a0;

@end
