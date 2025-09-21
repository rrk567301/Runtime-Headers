@class NSArray;
@protocol IKImageEditPanelDataSource;

@interface IKImageEditPanel : NSPanel {
    void *_privateData;
}

@property id<IKImageEditPanelDataSource> dataSource;
@property (readonly) NSArray *filterArray;

+ (id)IKImageIOLocalizedString:(id)a0;
+ (void)locateLongitude:(double)a0 latitude:(double)a1 query:(id)a2;
+ (id)IKEditPanelLocalizedString:(id)a0;
+ (char)hasSharedImageEditPanel;
+ (void)locateLongitude:(double)a0 latitude:(double)a1;
+ (id)processMetaData:(id)a0;
+ (id)sharedImageEditPanel;

- (void)dealloc;
- (void)finalize;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)canBecomeKeyWindow;
- (id)imageView;
- (char)makeFirstResponder:(id)a0;
- (void)makeKeyAndOrderFront:(id)a0;
- (void)mouseDown:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (void)reloadData;
- (void)setImageView:(id)a0;
- (void)setup;
- (void)makeBig;
- (int)windowbarHeight;
- (void)adjustDisplayModes:(long long)a0;
- (id)dsHandler;
- (char)hasAdjustMode;
- (char)hasDetailsMode;
- (char)hasEffectsMode;
- (void)makeSmall;
- (void)setHasAdjustMode:(char)a0;
- (void)setHasDetailsMode:(char)a0;
- (void)setHasEffectsMode:(char)a0;
- (void)showPanel:(char)a0;
- (int)tabHeight;
- (void)tabSelectionChanged:(id)a0;

@end
