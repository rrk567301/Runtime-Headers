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
@property (nonatomic) char headerPlaceholderIsVisible;
@property (nonatomic) char footerPlaceholderIsVisible;
@property (nonatomic) char slideNumberPlaceholderIsVisible;
@property (nonatomic) char dateTimePlaceholderIsVisible;

- (id)description;
- (void).cxx_destruct;
- (id)initWithPresentation:(id)a0;
- (id)colorMap;
- (id)colorScheme;
- (id)theme;
- (void)addSlideLayout:(id)a0;
- (void)doneWithContent;
- (id)parentSlideBase;
- (id)addSlideLayout;
- (id)bodyTextStyle;
- (id)defaultTextListStyle;
- (id)defaultTheme;
- (id)drawingTheme;
- (id)fontScheme;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(char)a2;
- (id)otherTextStyle;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(char)a2;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(char)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(char)a3;
- (id)parentTextStyleForTables;
- (id)placeholderWithType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(char)a2;
- (void)removeUnnecessaryOverrides;
- (void)setBodyTextStyle:(id)a0;
- (void)setOtherTextStyle:(id)a0;
- (void)setTitleTextStyle:(id)a0;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (id)slideLayoutAtIndex:(unsigned long long)a0;
- (unsigned long long)slideLayoutCount;
- (id)slideLayoutOfType:(int)a0;
- (id)styleMatrix;
- (id)titleTextStyle;

@end
