@class NSUserInterfaceCompressionOptions, NSArray, NSSet, NSMapTable;

@interface NSCompressionGroupLayout : NSObject <NSCopying> {
    BOOL _prefersEqualWidths;
    double _preferredItemWidth;
    NSArray *_prioritizedCompressionOptions;
    NSUserInterfaceCompressionOptions *_currentOptions;
    NSMapTable *_itemsToWidths;
    double _equalMinWidth;
    double _equalMaxWidth;
    double _guarenteedEqualWidth;
    double _largestUnstretchedWidth;
    double _largestStretchedWidth;
    double _smallestStretchedWidth;
    double _largestPreferredWidth;
    NSSet *_currentItems;
    NSArray *_effectiveCompressionOptions;
    BOOL _hasAlertStyle;
    NSArray *_cachedItemsExcludingSpaces;
}

@property BOOL prefersEqualWidths;
@property double preferredItemWidth;
@property (copy) NSArray *prioritizedCompressionOptions;
@property (readonly) NSUserInterfaceCompressionOptions *effectiveCompressionOptions;
@property (copy) NSSet *items;
@property BOOL groupHasAlertStyle;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)item:(id)a0 minSize:(struct CGSize { double x0; double x1; } *)a1 maxSize:(struct CGSize { double x0; double x1; } *)a2 preferredSize:(struct CGSize { double x0; double x1; } *)a3;
- (void)invalidateMeasurementsOfItem:(id)a0;
- (void)frameChangesEnded;
- (double)_minimumWidthForCompressionOptions:(id)a0;
- (id)_defaultCompressionOptionOrder;
- (void)invalidateMeasurementsOfItems;
- (void)_setupItems:(id)a0;
- (void)_teardownItems:(id)a0;
- (id)_compoundedCompressionOptions;
- (id)_itemsExcludingSpaces;
- (id)_prioritizedAndSanitizedCompressionOptionsForOptions:(id)a0;
- (double)_cachedWidthForItem:(id)a0 options:(id)a1;
- (void)_item:(id)a0 setCurrentCompressionOptions:(id)a1;
- (id)_compressionOptionForItem:(id)a0;
- (BOOL)_customOptionOrderAllowsOption:(id)a0;
- (void)_setCurrentCompressionOptions:(id)a0;
- (double)_equalMinWidthForGuarenteedEqualWidthGroup;
- (double)_smallestStretchedWidthForGroup;
- (double)_largestUnstretchedWidthForGroup;
- (double)_largestStretchedWidthForGroup;
- (BOOL)_itemViewWantsAlertStylePadding:(id)a0;
- (id)_optionPriorToBreakingEqualWidths;
- (double)_guarenteedWidthForNotBreakingEqualWidths;
- (double)_equalMaxWidthForGuarenteedEqualWidthGroup;
- (double)_largestPreferredWidthForGroup;

@end
