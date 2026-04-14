@class _NSScreenSharedInfo, NSArray, NSDictionary, NSString, NSColorSpace, NSCGSDisplay;

@interface NSScreen : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    int _depth;
    NSCGSDisplay *_display;
    _NSScreenSharedInfo *_sharedInfo;
    NSColorSpace *_colorSpace;
    NSString *_UUIDString;
    int _displayID;
}

@property (class, readonly, copy) NSArray *screens;
@property (class, readonly) NSScreen *mainScreen;
@property (class, readonly) NSScreen *deepestScreen;
@property (class, readonly) BOOL screensHaveSeparateSpaces;

@property (readonly) long long maximumFramesPerSecond;
@property (readonly) double minimumRefreshInterval;
@property (readonly) double maximumRefreshInterval;
@property (readonly) double displayUpdateGranularity;
@property (readonly) double lastDisplayUpdateTimestamp;
@property (readonly) double maximumExtendedDynamicRangeColorComponentValue;
@property (readonly) double maximumPotentialExtendedDynamicRangeColorComponentValue;
@property (readonly) double maximumReferenceExtendedDynamicRangeColorComponentValue;
@property (readonly) int depth;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleFrame;
@property (readonly, copy) NSDictionary *deviceDescription;
@property (readonly) NSColorSpace *colorSpace;
@property (readonly) const int *supportedWindowDepths;
@property (readonly) double backingScaleFactor;
@property (readonly, copy) NSString *localizedName;
@property (readonly) struct NSEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsets;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } auxiliaryTopLeftArea;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } auxiliaryTopRightArea;

+ (id)_zeroScreen;
+ (double)_zeroScreenHeight;
+ (id)_screenForScreenNumber:(long long)a0;
+ (BOOL)_spacePerDisplay;
+ (double)_backingScaleFactorForScreen:(id)a0;
+ (struct CGPoint { double x0; double x1; })_cgScreenPointForPoint:(struct CGPoint { double x0; double x1; })a0;
+ (BOOL)_zeroScreenIsNew;
+ (id)_screenForUUIDString:(id)a0;
+ (id)_screenAtPoint:(struct CGPoint { double x0; double x1; })a0;
+ (BOOL)_captureAllScreens:(id *)a0;
+ (BOOL)_releaseAllCapturedScreens:(id *)a0;
+ (int)_shieldingWindowLevel;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)_displayID;
- (id)_UUIDString;
- (id)displayLinkWithTarget:(id)a0 selector:(SEL)a1;
- (unsigned long long)_currentSpace;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })backingAlignedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectToBacking:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertRectFromBacking:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)canRepresentDisplayGamut:(long long)a0;
- (long long)_screenNumber;
- (id)_copy;
- (unsigned int)_dockOrientation;
- (double)_revealedMenuBarHeight;
- (struct CGSize { double x0; double x1; })devicePixelCounts;
- (id)_initWithDisplay:(id)a0 sharedInfo:(id)a1;
- (BOOL)_isZeroScreen;
- (double)_layoutMenuBarHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_dockRect;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_layoutFrameForSafeVisibleFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_daisyFrame;
- (struct CGSize { double x0; double x1; })_resolution;
- (void)_updateWithDisplay:(id)a0 sharedInfo:(id)a1;
- (BOOL)_dockHidden;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_daisyFrameForSpace:(unsigned long long)a0;
- (double)_restingMenuBarHeight;
- (double)_layoutForcingRevealedMenuBarHeight;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_safeVisibleFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_safeAreaFrame;
- (id)bezelPath;
- (id)imageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 underWindow:(id)a1;
- (BOOL)_isActiveScreen;
- (id)_hwModel;
- (double)userSpaceScaleFactor;
- (id)displayLinkWithHandler:(id /* block */)a0;
- (id)_bestSettingWithBitsPerPixel:(int)a0 width:(int)a1 height:(int)a2 refreshRate:(double)a3 exactMatch:(BOOL *)a4;
- (BOOL)_capture:(id *)a0;
- (BOOL)_isCaptured;
- (BOOL)_releaseCapture:(id *)a0;
- (id)_currentSetting;
- (id)_availableSettings;
- (id)_bestSettingWithBitsPerPixel:(int)a0 width:(int)a1 height:(int)a2 exactMatch:(BOOL *)a3;
- (id)_bestSettingSimilarToSetting:(id)a0 exactMatch:(BOOL *)a1;
- (BOOL)_switchToSetting:(id)a0 error:(id *)a1;

@end
