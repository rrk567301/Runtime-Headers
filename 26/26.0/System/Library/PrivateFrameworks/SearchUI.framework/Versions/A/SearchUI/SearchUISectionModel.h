@class NSArray, SearchUISection, SearchUIAsyncSectionLoader;

@interface SearchUISectionModel : NSObject <NSCopying>

@property (nonatomic) BOOL drawPlattersIfNecessary;
@property (nonatomic) unsigned long long numberOfSections;
@property (retain, nonatomic) NSArray *rowModels;
@property (retain, nonatomic) SearchUISection *section;
@property (retain, nonatomic) SearchUIAsyncSectionLoader *asyncLoader;

+ (long long)sectionType;
+ (id)sectionModelWithGridRowModels:(id)a0 numberOfColumns:(long long)a1 gridStyle:(int)a2 section:(id)a3 expandedCollectionSections:(id)a4;
+ (id)sectionModelWithRows:(id)a0 drawPlattersIfNecessary:(BOOL)a1 section:(id)a2 expandedCollectionSections:(id)a3;
+ (id)sectionModelWithScrollingRowModels:(id)a0 numberOfRows:(long long)a1 section:(id)a2;

- (id)backgroundColor;
- (BOOL)needsHeader;
- (BOOL)isCollectionStyleRow;
- (BOOL)shouldInsetGroupedCollectionStyleWithAttributes:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsWithAttributes:(id)a0 sectionIndex:(unsigned long long)a1;
- (id)copyWithRowModels:(id)a0;
- (void)prepareForSnapshot;
- (BOOL)needsHorizontalNavigation;
- (int)separatorStyleForIndex:(unsigned long long)a0 shouldDrawTopAndBottomSeparators:(BOOL)a1;
- (BOOL)needsHeaderSeparator;
- (id)overriddenAccessibilityIdentifier;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })headerInsetsWithAttributes:(id)a0;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 dataSource:(id)a2;
- (id)description;
- (id)initWithRowModels:(id)a0 section:(id)a1;
- (BOOL)shouldHeightMatchSection;
- (BOOL)selfSizingInTwoAxes;
- (BOOL)shouldInsetGroupedCollectionStyle;
- (double)horizontalInsetWithAttributes:(id)a0 forSupplementary:(BOOL)a1;
- (int)separatorStyleForIndex:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)collectionStyleRow;
- (void)reloadCornerMaskingOverrideWithAttributes:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)forceTopSeparatorForBrowseMode;
- (void).cxx_destruct;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;

@end
