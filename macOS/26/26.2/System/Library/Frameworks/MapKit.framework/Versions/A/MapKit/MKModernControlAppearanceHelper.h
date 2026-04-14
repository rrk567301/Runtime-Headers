@class NSGlassView, NSArray, NSView, NSString, NSVisualEffectView, NSColor;
@protocol MKModernControlAppearanceView;

@interface MKModernControlAppearanceHelper : NSObject <NSViewLayerContentScaleDelegate, CALayerDelegate> {
    NSView<MKModernControlAppearanceView> *_view;
}

@property (class, readonly, nonatomic) double dimensionLong;
@property (class, readonly, nonatomic) double dimensionShort;
@property (class, readonly, nonatomic) double cornerRadius;

@property (readonly, nonatomic) NSColor *colorActive;
@property (readonly, nonatomic) NSColor *colorDefault;
@property (readonly, nonatomic) NSColor *colorInactive;
@property (readonly, nonatomic) NSColor *backgroundColorPressed;
@property (copy, nonatomic) NSArray *layers;
@property (readonly, nonatomic) BOOL isLightMode;
@property (readonly, nonatomic) NSVisualEffectView *effectView;
@property (readonly, nonatomic) NSGlassView *glassView;
@property (readonly, nonatomic) NSView *glassContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_appearanceForLightMode:(BOOL)a0;
+ (id)helperFor:(id)a0;

- (void)updateAppearance;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (BOOL)layer:(id)a0 shouldInheritContentsScale:(double)a1 fromWindow:(id)a2;
- (id)_colorWithAlphaComponent:(double)a0 appliedIfGlassEnabled:(BOOL)a1;

@end
