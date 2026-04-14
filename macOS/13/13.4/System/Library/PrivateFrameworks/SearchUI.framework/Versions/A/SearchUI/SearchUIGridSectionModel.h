@interface SearchUIGridSectionModel : SearchUISectionModel

@property unsigned long long numberOfColumns;

- (id)initWithRowModels:(id)a0 numberOfColumns:(long long)a1 section:(id)a2;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 collectionModel:(id)a2;
- (BOOL)needsHorizontalNavigation;
- (id)overriddenAccessibilityIdentifier;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (void)setCornerMaskRulesOnRowModelsForColumnCount:(unsigned long long)a0;

@end
