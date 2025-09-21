@class NSString, NSImage, NSDictionary, CALayer;

@interface NSVisualEffectView : NSView {
    CALayer *_materialLayerActive;
    CALayer *_materialLayerInactive;
    long long _material;
    long long _blendingMode;
    long long _state;
    NSImage *_cachedFillMaskImage;
    NSString *_groupName;
    NSDictionary *_coreUIOptions;
    NSDictionary *_coreUIMetadata;
    CALayer *_colorFillLayer;
    NSImage *_maskImage;
    double _materialCornerRadius;
    unsigned char _clear : 1;
    unsigned char _emphasized : 1;
    unsigned char _appearsDarker : 1;
    unsigned char _inheritsBlendGroup : 1;
    unsigned char _hasSetUsesMaterialPreferredAppearance : 1;
    unsigned char _usesMaterialPreferredAppearance : 1;
    unsigned char _forcesArtificialChameleon : 1;
    unsigned int _useContinuousCorners;
}

@property (class, readonly, getter=_isDefenestratorEnabled) char _defenestratorEnabled;
@property (class, readonly) NSString *_behindWindowBackdropGroupName;
@property (class, readonly) double _behindWindowBackdropScale;

@property char appearsDarker;
@property (setter=_setForcesArtificialChameleon:) char _forcesArtificialChameleon;
@property (getter=_isClear, setter=_setClear:) char _clear;
@property (nonatomic, setter=_setUsesMaterialPreferredAppearance:) char _usesMaterialPreferredAppearance;
@property (copy, setter=_setGroupName:) NSString *_groupName;
@property (setter=_setMaterialCornerRadius:) double _materialCornerRadius;
@property (setter=_setUseContinuousCorners:) char _useContinuousCorners;
@property long long material;
@property (readonly) long long interiorBackgroundStyle;
@property long long blendingMode;
@property long long state;
@property (retain) NSImage *maskImage;
@property (getter=isEmphasized) char emphasized;

+ (id)_representativeColorForMaterial:(long long)a0 isActive:(char)a1;
+ (void)beginFreezingInWindow:(id)a0;
+ (void)endFreezingInWindow:(id)a0;
+ (id)keyPathsForValuesAffecting_effectiveWithinWindowBackdropGroupName;

- (void)dealloc;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateVibrancy;
- (char)_needsDarkening;
- (unsigned long long)_vibrantBlendingStyleForSubtree;
- (void)_accessibilityRTChanged:(id)a0;
- (id)_coreUIOptions;
- (id)_currentFillColor;
- (double)_effectiveMaskCornerRadius;
- (id)_effectiveMaskImage;
- (id)_effectiveWithinWindowBackdropGroupName;
- (void)_freeCachedMaskImages;
- (id)_generateMaskImageWithCurrentFillColor;
- (void)_markDirtyIfHasAccelerationChanged;
- (id)_nextResponderForEvent:(id)a0;
- (id)_preferredAppearance;
- (id)_propertyKeysForIntrospector;
- (void)_reactToMaterialChangeDiscardingMaterialLayers:(char)a0 invalidatingPreferredAppearance:(char)a1;
- (void)_reduceDesktopTintingChanged:(id)a0;
- (void)_removeColorFillLayerIfNeeded;
- (void)_removeMaterialLayerIfNeeded;
- (void)_setCornerRadius:(double)a0;
- (char)_shouldUseActiveAppearance;
- (id)_stringValueForIntrospectorPropertyKey:(id)a0;
- (void)_updateColorFillLayer;
- (void)_updateMaterialLayer;
- (void)_updateWithinWindowBackdropLayerGroupName;
- (char)_useAccessibilityColors;
- (char)_wantsArtificialChameleonLayer;
- (void)_windowChangedKeyState;
- (void)_windowFullScreenDidChange;
- (char)allowsVibrancy;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)emphasized;
- (char)inheritsBlendGroup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setInheritsBlendGroup:(char)a0;
- (void)updateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)a0;
- (char)wantsLayer;
- (char)wantsUpdateLayer;

@end
