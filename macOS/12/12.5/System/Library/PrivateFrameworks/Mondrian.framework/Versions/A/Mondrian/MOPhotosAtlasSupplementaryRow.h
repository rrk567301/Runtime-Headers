@class NSString;
@protocol MOAccessibilityChildrenDelegate;

@interface MOPhotosAtlasSupplementaryRow : UXCollectionReusableView {
    id _rowImage;
    BOOL _clearRowImage;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentsRect;
}

@property (weak, nonatomic) id<MOAccessibilityChildrenDelegate> accessibilityDelegate;
@property long long accessibilitySelectedChildIndex;
@property (readonly) NSString *uuid;

+ (void)clearColorCaches;
+ (id)rowEmptyImage;
+ (struct CGColor { } *)rowEmptyColor;

- (BOOL)isEmpty;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)indexPath;
- (BOOL)isOpaque;
- (BOOL)wantsUpdateLayer;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidChangeEffectiveAppearance;
- (id)accessibilityChildren;
- (id)representedElementKind;
- (void)prepareForRecycling;
- (void)setRowImage:(id)a0 contentsRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setRowImage:(id)a0;
- (id)rowImage;

@end
