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

- (BOOL)needsHorizontalNavigation;
- (id)initWithRowModels:(id)a0 section:(id)a1;
- (int)separatorStyleForIndex:(unsigned long long)a0;
- (BOOL)shouldInsetGroupedCollectionStyleWithAttributes:(id)a0;
- (void)reloadCornerMaskingOverrideWithAttributes:(id)a0;
- (BOOL)forceTopSeparatorForBrowseMode;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsWithAttributes:(id)a0 sectionIndex:(unsigned long long)a1;
- (BOOL)selfSizingInTwoAxes;
- (BOOL)isCollectionStyleRow;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })headerInsetsWithAttributes:(id)a0;
- (id)copyWithRowModels:(id)a0;
- (BOOL)needsHeaderSeparator;
- (id)collectionStyleRow;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 dataSource:(id)a2;
- (double)horizontalInsetWithAttributes:(id)a0 forSupplementary:(BOOL)a1;
- (BOOL)needsHeader;
- (int)separatorStyleForIndex:(unsigned long long)a0 shouldDrawTopAndBottomSeparators:(BOOL)a1;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (void)prepareForSnapshot;
- (id)overriddenAccessibilityIdentifier;
- (BOOL)shouldInsetGroupedCollectionStyle;
- (BOOL)shouldHeightMatchSection;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)backgroundColor;
- (id)description;

@end
