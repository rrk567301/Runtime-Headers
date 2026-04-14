@interface SearchUIGridSectionModel : SearchUISectionModel

@property (nonatomic) unsigned long long numberOfColumns;
@property (nonatomic) int gridStyle;

+ (long long)sectionType;

- (void)setCornerMaskRulesOnRowModels:(id)a0 forColumnCount:(unsigned long long)a1;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsWithAttributes:(id)a0 sectionIndex:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)needsHorizontalNavigation;
- (id)overriddenAccessibilityIdentifier;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 dataSource:(id)a2;
- (id)rfHeroImageGridLayoutSectionForCardSection:(id)a0;
- (BOOL)needsHeaderSeparator;
- (BOOL)forceTopSeparatorForBrowseMode;
- (id)initWithRowModels:(id)a0 numberOfColumns:(long long)a1 gridStyle:(int)a2 section:(id)a3;
- (double)cachedHeightForRowModel:(id)a0 width:(double)a1 key:(id)a2;

@end
