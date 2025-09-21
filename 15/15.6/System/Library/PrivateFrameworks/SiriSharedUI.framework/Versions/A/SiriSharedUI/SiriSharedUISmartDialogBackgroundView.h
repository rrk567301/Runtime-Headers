@class NSView, NSColor;

@interface SiriSharedUISmartDialogBackgroundView : NSView

@property (retain, nonatomic) NSView *internalBackgroundView;
@property (nonatomic) unsigned long long backgroundType;
@property (nonatomic) unsigned long long backgroundMaterial;
@property (retain, nonatomic) NSColor *backgroundColor;

- (id)init;
- (void).cxx_destruct;
- (void)layout;
- (id)contentView;
- (void)setContinuousCornerRadius:(double)a0;
- (void)_configureBackgroundView:(id)a0;
- (id)_createColorBackgroundView;
- (id)_createMaterialBackgroundView;
- (void)_updateBackgroundContentView;

@end
