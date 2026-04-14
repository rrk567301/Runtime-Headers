@class OADTextListStyle, OADTheme, OADColorMap;

@interface PDNotesMaster : PDSlideBase {
    OADTheme *mTheme;
    OADColorMap *mColorMap;
    OADTextListStyle *mNotesTextStyle;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)colorMap;
- (id)colorScheme;
- (id)theme;
- (void)removeUnnecessaryOverrides;
- (id)drawingTheme;
- (id)styleMatrix;
- (id)fontScheme;
- (void)setUpPropertyHierarchyPreservingEffectiveValues;
- (void)doneWithContent;
- (id)notesTextStyle;
- (id)defaultTextListStyle;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(BOOL)a3;
- (id)parentTextStyleForTables;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentSlideBase;

@end
