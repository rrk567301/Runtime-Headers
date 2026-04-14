@class NSString;
@protocol MOMediaViewCellThumbnailViewDelegate;

@interface MOMediaViewCellThumbnailView : NSView <NSAccessibilityImage> {
    BOOL _useNearestInterpolation;
    BOOL _useNearestInterpolationHasChanged;
    id _thumbnailImage;
    BOOL _clearThumbnailImage;
    BOOL _changePending;
}

@property (weak, nonatomic) id<MOMediaViewCellThumbnailViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (id)accessibilityLabel;
- (id)accessibilityRoleDescription;
- (BOOL)mouseDownCanMoveWindow;
- (id)accessibilityIdentifier;
- (id)thumbnailImage;
- (void)prepareForRecycling;
- (void)setThumbnailImage:(id)a0 usingNearestInterpolation:(BOOL)a1 animated:(BOOL)a2;
- (BOOL)useNearestInterpolation;

@end
