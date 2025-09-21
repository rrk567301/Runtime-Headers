@class NSCell, NSBundle, NSImage, CellImageLayer, NSString, NSLock;

@interface IFXDiskButtonCell : NSButtonCell {
    NSBundle *_resourceBundle;
    long long _imageCellLayout;
    CellImageLayer *_diskImageLayer;
    CellImageLayer *_statusImageLayer;
    CellImageLayer *_systemDiskBadgeLayer;
    NSCell *_titleCell;
    NSCell *_title2Cell;
    NSCell *_title3Cell;
    double _titleHeight;
    NSString *_sizeDescriptionAvailableTooltipString;
    long long _fadeState;
    double _fadeAlpha;
    char _isSelected;
    char _requiresChange;
    char _requiresChangeNotInEffect;
    char _visible;
    char _needsPositionsResized;
    char _isInDealloc;
    NSLock *_KVODestructionLock;
}

@property (readonly) double _width;
@property (retain) NSImage *alternateTopImage;
@property (readonly) char increaseAlphaFade;
@property char visible;
@property char requiresChange;

- (void)dealloc;
- (id)init;
- (void)setEnabled:(char)a0;
- (void)setRepresentedObject:(id)a0;
- (void)setTitle:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setLayout:(long long)a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)setFont:(id)a0;
- (void)_calculatePositions;
- (void)setMiddleImage:(id)a0;
- (void)_fadeACellIn:(id)a0;
- (void)_sizeFontsForLayout:(long long)a0;
- (void)_updateStatusOnMainThread:(id)a0;
- (void)badgeAsBootVolume;
- (long long)compareTarget:(id)a0;
- (void)fadeCellIn;
- (void)fadeCellOut;
- (void)setFadeAlpha:(double)a0;
- (void)setIsSelected:(char)a0 withEffect:(char)a1;
- (void)setupToolTipForTarget:(id)a0;

@end
