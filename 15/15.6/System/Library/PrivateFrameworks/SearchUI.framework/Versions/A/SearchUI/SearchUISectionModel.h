@class NSArray, SearchUISection, SearchUIAsyncSectionLoader;

@interface SearchUISectionModel : NSObject <NSCopying>

@property (nonatomic) char drawPlattersIfNecessary;
@property (nonatomic) unsigned long long numberOfSections;
@property (retain, nonatomic) NSArray *rowModels;
@property (retain, nonatomic) SearchUISection *section;
@property (retain, nonatomic) SearchUIAsyncSectionLoader *asyncLoader;

+ (long long)sectionType;
+ (id)sectionModelWithGridRowModels:(id)a0 numberOfColumns:(long long)a1 gridStyle:(int)a2 section:(id)a3 expandedCollectionSections:(id)a4;
+ (id)sectionModelWithRows:(id)a0 drawPlattersIfNecessary:(char)a1 section:(id)a2 expandedCollectionSections:(id)a3;
+ (id)sectionModelWithScrollingRowModels:(id)a0 numberOfRows:(long long)a1 section:(id)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)backgroundColor;
- (id)copyWithRowModels:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })headerInsetsWithAttributes:(id)a0 sectionIndex:(unsigned long long)a1;
- (double)horizontalInsetWithAttributes:(id)a0 forSupplementary:(char)a1;
- (id)initWithRowModels:(id)a0 section:(id)a1;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 dataSource:(id)a2;
- (char)needsHeader;
- (char)needsHeaderSeparator;
- (char)needsHorizontalNavigation;
- (id)overriddenAccessibilityIdentifier;
- (void)prepareForSnapshot;
- (void)reloadCornerMaskingOverrideWithAttributes:(id)a0;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsWithAttributes:(id)a0 sectionIndex:(unsigned long long)a1;
- (char)selfSizingInTwoAxes;
- (int)separatorStyleForIndex:(unsigned long long)a0;
- (int)separatorStyleForIndex:(unsigned long long)a0 shouldDrawTopAndBottomSeparators:(char)a1;
- (char)shouldDisplayChevronForIndex:(unsigned long long)a0 nextCardsEnabled:(char)a1;
- (char)shouldHeightMatchSection;
- (char)shouldInsetGroupedCollectionStyle;
- (char)shouldLeaveSpaceForChevronForIndex:(unsigned long long)a0;

@end
