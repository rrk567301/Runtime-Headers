@interface SearchUIHorizontallyScrollingSectionModel : SearchUISectionModel

@property long long numberOfRows;

+ (long long)sectionType;

- (BOOL)drawsBackground;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })sectionInsetsWithAttributes:(id)a0 sectionIndex:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)needsHorizontalNavigation;
- (id)overriddenAccessibilityIdentifier;
- (long long)sectionBackgroundStyleWithAttributes:(id)a0;
- (id)layoutSectionForEnvironment:(id)a0 attributes:(id)a1 dataSource:(id)a2;
- (BOOL)needsHeaderSeparator;
- (BOOL)selfSizingInTwoAxes;
- (id)initWithRowModels:(id)a0 section:(id)a1 numberOfRows:(long long)a2;
- (BOOL)shouldHeightMatchSection;

@end
