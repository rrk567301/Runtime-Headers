@class MOMediaItem, NSAccessibilityElement, MOPhotosAtlasSupplementaryRow;
@protocol MOPhotoAtlasLayoutCellAXDelegate;

@interface MOPhotosAtlasLayoutCellAccessibility : NSAccessibilityElement

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frameInRow;
@property (nonatomic) long long indexOfRow;
@property (weak, nonatomic) MOPhotosAtlasSupplementaryRow *row;
@property (weak, nonatomic) MOMediaItem *mediaItem;
@property (readonly, nonatomic) NSAccessibilityElement *image;
@property (weak, nonatomic) id<MOPhotoAtlasLayoutCellAXDelegate> axDelegate;

- (void).cxx_destruct;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (id)accessibilityRoleDescription;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)a0;
- (void)accessibilityPerformAction:(id)a0;
- (id)accessibilityTitle;
- (BOOL)accessibilityPerformPick;
- (BOOL)accessibilityPerformPress;
- (BOOL)isAccessibilitySelected;
- (void)setAccessibilitySelected:(BOOL)a0;
- (id)accessibilityHelp;
- (BOOL)accessibilityPerformScrollToVisible;
- (id)_layoutSectionAccessibility;
- (id)_actualIndexPath;
- (id)initWithMediaItem:(id)a0 row:(id)a1 frameInRow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 indexOfRow:(long long)a3;

@end
