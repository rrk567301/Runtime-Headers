@interface SearchUIHorizontallyScrollingSectionModel : SearchUISectionModel

@property long long numberOfRows;

- (BOOL)drawsBackground;
- (id)initWithRowModels:(id)a0 section:(id)a1 numberOfRows:(long long)a2;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 collectionModel:(id)a2;
- (BOOL)needsHorizontalNavigation;
- (id)overriddenAccessibilityIdentifier;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (BOOL)selfSizingInTwoAxes;
- (BOOL)shouldHeightMatchSection;

@end
