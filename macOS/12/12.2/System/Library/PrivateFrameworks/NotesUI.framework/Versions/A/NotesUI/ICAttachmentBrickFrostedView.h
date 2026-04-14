@class NSVisualEffectView;

@interface ICAttachmentBrickFrostedView : NSView

@property (retain, nonatomic) NSVisualEffectView *visualEffectView;
@property (nonatomic) BOOL clear;
@property (nonatomic) BOOL forManualRendering;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsLayer;
- (BOOL)wantsDefaultClipping;
- (void)disableVibrancyDidChange:(id)a0;
- (void)adjustBackgroundIfNecessary;

@end
