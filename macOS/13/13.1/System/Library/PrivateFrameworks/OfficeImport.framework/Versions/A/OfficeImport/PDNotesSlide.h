@class PDNotesMaster;

@interface PDNotesSlide : PDSlideChild {
    PDNotesMaster *mNotesMaster;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)doneWithContent;
- (id)notesMaster;
- (void)setNotesMaster:(id)a0;
- (id)masterPlaceholderOfType:(int)a0;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(BOOL)a3;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(BOOL)a2;
- (id)parentSlideBase;

@end
