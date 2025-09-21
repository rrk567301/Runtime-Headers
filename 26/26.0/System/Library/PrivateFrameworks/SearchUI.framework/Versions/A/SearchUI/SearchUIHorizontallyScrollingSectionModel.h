@interface SearchUIHorizontallyScrollingSectionModel : SearchUISectionModel

@property long long numberOfRows;

+ (long long)sectionType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsWithAttributes:(id)a0 sectionIndex:(unsigned long long)a1;
- (BOOL)drawsBackground;
- (BOOL)needsHorizontalNavigation;
- (BOOL)needsHeaderSeparator;
- (id)overriddenAccessibilityIdentifier;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 dataSource:(id)a2;
- (BOOL)shouldHeightMatchSection;
- (BOOL)selfSizingInTwoAxes;
- (id)initWithRowModels:(id)a0 section:(id)a1 numberOfRows:(long long)a2;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;

@end
