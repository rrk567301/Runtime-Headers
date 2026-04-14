@class NSArray;
@protocol IKImageEditPanelDataSource;

@interface IKImageEditPanel : NSPanel {
    void *_privateData;
}

@property id<IKImageEditPanelDataSource> dataSource;
@property (readonly) NSArray *filterArray;

+ (id)sharedImageEditPanel;
+ (id)processMetaData:(id)a0;
+ (void)locateLongitude:(double)a0 latitude:(double)a1 query:(id)a2;
+ (BOOL)hasSharedImageEditPanel;
+ (id)IKEditPanelLocalizedString:(id)a0;
+ (id)IKImageIOLocalizedString:(id)a0;
+ (void)locateLongitude:(double)a0 latitude:(double)a1;

- (void)finalize;
- (void)dealloc;
- (void)reloadData;
- (void)mouseDown:(id)a0;
- (void)makeKeyAndOrderFront:(id)a0;
- (BOOL)canBecomeKeyWindow;
- (BOOL)makeFirstResponder:(id)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (double)animationResizeTime:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)imageView;
- (void)setImageView:(id)a0;
- (void)setup;
- (id)dsHandler;
- (BOOL)hasAdjustMode;
- (void)setHasAdjustMode:(BOOL)a0;
- (BOOL)hasEffectsMode;
- (void)setHasEffectsMode:(BOOL)a0;
- (BOOL)hasDetailsMode;
- (void)setHasDetailsMode:(BOOL)a0;
- (int)windowbarHeight;
- (int)tabHeight;
- (void)showPanel:(BOOL)a0;
- (void)tabSelectionChanged:(id)a0;
- (void)makeBig;
- (void)adjustDisplayModes:(long long)a0;
- (void)makeSmall;

@end
