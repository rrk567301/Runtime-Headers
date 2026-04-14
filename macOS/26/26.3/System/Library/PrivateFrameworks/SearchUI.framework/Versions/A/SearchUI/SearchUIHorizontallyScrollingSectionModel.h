@interface SearchUIHorizontallyScrollingSectionModel : SearchUISectionModel

@property long long numberOfRows;

+ (long long)sectionType;

- (id)overriddenAccessibilityIdentifier;
- (BOOL)shouldHeightMatchSection;
- (BOOL)drawsBackground;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsWithAttributes:(id)a0 sectionIndex:(unsigned long long)a1;
- (BOOL)needsHorizontalNavigation;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRowModels:(id)a0 section:(id)a1 numberOfRows:(long long)a2;
- (BOOL)selfSizingInTwoAxes;
- (BOOL)needsHeaderSeparator;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 dataSource:(id)a2;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;

@end
