@class NSString;
@protocol MOMediaViewCellThumbnailViewDelegate;

@interface MOMediaViewCellThumbnailView : NSView <NSAccessibilityImage> {
    char _useNearestInterpolation;
    char _useNearestInterpolationHasChanged;
    id _thumbnailImage;
    char _clearThumbnailImage;
    char _changePending;
}

@property (weak, nonatomic) id<MOMediaViewCellThumbnailViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)isEmpty;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityRoleDescription;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isOpaque;
- (char)mouseDownCanMoveWindow;
- (id)thumbnailImage;
- (void)updateLayer;
- (void)viewDidChangeEffectiveAppearance;
- (char)wantsUpdateLayer;
- (void)prepareForRecycling;
- (void)setThumbnailImage:(id)a0 usingNearestInterpolation:(char)a1 animated:(char)a2;
- (char)useNearestInterpolation;

@end
