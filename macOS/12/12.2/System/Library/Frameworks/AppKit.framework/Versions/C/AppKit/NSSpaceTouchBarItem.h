@class NSString;

@interface NSSpaceTouchBarItem : NSTouchBarItem <NSTouchBarItemTypeSpace>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL appearsInCustomization;
@property (readonly) double minimumWidth;
@property (readonly) double maximumWidth;

+ (id)smallFixedSpace;
+ (id)largeFixedSpace;
+ (id)flexibleSpace;
+ (double)standardSmallSpace;
+ (double)standardLargeSpace;

- (long long)_type;
- (id)initWithIdentifier:(id)a0;
- (float)visibilityPriority;
- (id)makeViewForCustomizationPalette;
- (id)customizationLabel;
- (void)_itemViewMinSize:(struct CGSize { double x0; double x1; } *)a0 maxSize:(struct CGSize { double x0; double x1; } *)a1 preferredSize:(struct CGSize { double x0; double x1; } *)a2 stretchesContent:(BOOL)a3;
- (id)initWithIdentifier:(id)a0 minimumWidth:(double)a1 maximumWidth:(double)a2;
- (id)makeViewForCustomizationPreview;
- (struct CGSize { double x0; double x1; })fallbackItemSizeForCustomization;
- (struct CGSize { double x0; double x1; })preferredSizeForCustomizationPalette;

@end
