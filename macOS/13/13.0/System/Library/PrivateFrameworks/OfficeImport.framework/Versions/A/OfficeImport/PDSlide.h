@class PDSlideLayout, PDNotesSlide, NSMutableArray, OITSUNoCopyDictionary;

@interface PDSlide : PDSlideChild {
    PDSlideLayout *mSlideLayout;
    NSMutableArray *mComments;
    PDNotesSlide *mNotesSlide;
}

@property (retain) OITSUNoCopyDictionary *commentParents;

- (id)description;
- (void).cxx_destruct;
- (id)transition;
- (id)background;
- (void)removeUnnecessaryOverrides;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (void)doneWithContent;
- (unsigned long long)commentCount;
- (id)slideLayout;
- (void)setSlideLayout:(id)a0;
- (id)notesSlide;
- (void)setNotesSlide:(id)a0;
- (id)commentAtIndex:(unsigned long long)a0;
- (void)addComment:(id)a0;
- (id)commentForAuthorId:(unsigned long long)a0 authorIdx:(unsigned long long)a1;
- (void)setInheritedTextStyle:(id)a0 placeholderType:(int)a1 defaultTextListStyle:(id)a2;
- (id)inheritedTextStyleForPlaceholderType:(int)a0;
- (id)defaultTheme;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(BOOL)a3;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentSlideBase;

@end
