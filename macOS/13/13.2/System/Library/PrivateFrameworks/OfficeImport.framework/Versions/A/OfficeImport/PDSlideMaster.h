@class OADTheme, OADTextListStyle, PDPresentation, NSMutableArray, OADColorMap;

@interface PDSlideMaster : PDSlideBase {
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mTitleTextStyle;
    OADTextListStyle *mBodyTextStyle;
    OADTextListStyle *mOtherTextStyle;
}

@property (readonly, weak, nonatomic) PDPresentation *presentation;
@property (retain, nonatomic) NSMutableArray *slideLayouts;
@property (nonatomic) BOOL headerPlaceholderIsVisible;
@property (nonatomic) BOOL footerPlaceholderIsVisible;
@property (nonatomic) BOOL slideNumberPlaceholderIsVisible;
@property (nonatomic) BOOL dateTimePlaceholderIsVisible;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPresentation:(id)a0;
- (id)colorMap;
- (id)colorScheme;
- (id)theme;
- (void)removeUnnecessaryOverrides;
- (id)drawingTheme;
- (id)styleMatrix;
- (id)fontScheme;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (void)doneWithContent;
- (id)defaultTheme;
- (id)defaultTextListStyle;
- (id)placeholderWithType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(BOOL)a3;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentSlideBase;
- (unsigned long long)slideLayoutCount;
- (id)slideLayoutAtIndex:(unsigned long long)a0;
- (void)addSlideLayout:(id)a0;
- (id)addSlideLayout;
- (id)slideLayoutOfType:(int)a0;
- (id)titleTextStyle;
- (void)setTitleTextStyle:(id)a0;
- (id)bodyTextStyle;
- (void)setBodyTextStyle:(id)a0;
- (id)otherTextStyle;
- (void)setOtherTextStyle:(id)a0;

@end
