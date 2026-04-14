@interface SearchUIGridSectionModel : SearchUISectionModel

@property (nonatomic) unsigned long long numberOfColumns;

+ (long long)sectionType;

- (id)initWithRowModels:(id)a0 numberOfColumns:(long long)a1 section:(id)a2;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 dataSource:(id)a2;
- (BOOL)needsHorizontalNavigation;
- (id)overriddenAccessibilityIdentifier;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (void)setCornerMaskRulesOnRowModels:(id)a0 forColumnCount:(unsigned long long)a1;
- (BOOL)wantsHeaderSeparator;

@end
