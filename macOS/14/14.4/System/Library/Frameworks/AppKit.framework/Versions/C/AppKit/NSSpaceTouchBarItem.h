@class NSString;

@interface NSSpaceTouchBarItem : NSTouchBarItem <NSTouchBarItemTypeSpace>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL appearsInCustomization;
@property (readonly) double minimumWidth;
@property (readonly) double maximumWidth;

+ (id)largeFixedSpace;
+ (id)smallFixedSpace;
+ (id)flexibleSpace;
+ (double)standardLargeSpace;
+ (double)standardSmallSpace;

- (long long)_type;
- (id)initWithIdentifier:(id)a0;
- (id)makeViewForCustomizationPreview;
- (id)makeViewForCustomizationPalette;
- (void)_itemViewMinSize:(struct CGSize { double x0; double x1; } *)a0 maxSize:(struct CGSize { double x0; double x1; } *)a1 preferredSize:(struct CGSize { double x0; double x1; } *)a2 stretchesContent:(BOOL)a3;
- (id)customizationLabel;
- (struct CGSize { double x0; double x1; })fallbackItemSizeForCustomization;
- (id)initWithIdentifier:(id)a0 minimumWidth:(double)a1 maximumWidth:(double)a2;
- (struct CGSize { double x0; double x1; })preferredSizeForCustomizationPalette;
- (float)visibilityPriority;

@end
