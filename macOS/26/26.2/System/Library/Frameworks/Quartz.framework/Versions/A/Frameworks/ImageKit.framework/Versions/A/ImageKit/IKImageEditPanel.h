@class NSArray;
@protocol IKImageEditPanelDataSource;

@interface IKImageEditPanel : NSPanel {
    void *_privateData;
}

@property id<IKImageEditPanelDataSource> dataSource;
@property (readonly) NSArray *filterArray;

+ (void)locateLongitude:(double)a0 latitude:(double)a1 query:(id)a2;
+ (id)IKEditPanelLocalizedString:(id)a0;
+ (id)IKImageIOLocalizedString:(id)a0;
+ (BOOL)hasSharedImageEditPanel;
+ (void)locateLongitude:(double)a0 latitude:(double)a1;
+ (id)processMetaData:(id)a0;
+ (id)sharedImageEditPanel;

- (void)finalize;
- (void)reloadData;
- (id)imageView;
- (void)setup;
- (void)mouseDown:(id)a0;
- (void)setImageView:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (void)mouseUp:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)dealloc;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)makeFirstResponder:(id)a0;
- (void)makeKeyAndOrderFront:(id)a0;
- (void)makeBig;
- (int)windowbarHeight;
- (void)adjustDisplayModes:(long long)a0;
- (id)dsHandler;
- (BOOL)hasAdjustMode;
- (BOOL)hasDetailsMode;
- (BOOL)hasEffectsMode;
- (void)makeSmall;
- (void)setHasAdjustMode:(BOOL)a0;
- (void)setHasDetailsMode:(BOOL)a0;
- (void)setHasEffectsMode:(BOOL)a0;
- (void)showPanel:(BOOL)a0;
- (int)tabHeight;
- (void)tabSelectionChanged:(id)a0;

@end
