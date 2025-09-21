@class PDNotesMaster;

@interface PDNotesSlide : PDSlideChild {
    PDNotesMaster *mNotesMaster;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)doneWithContent;
- (id)parentSlideBase;
- (void)setNotesMaster:(id)a0;
- (id)masterGraphicForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(char)a2;
- (id)masterPlaceholderOfType:(int)a0;
- (id)notesMaster;
- (id)parentShapePropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(char)a2;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 overrideIndex:(char)a2;
- (id)parentTextStyleForPlaceholderType:(int)a0 placeholderTypeIndex:(int)a1 defaultTextListStyle:(id)a2 overrideIndex:(char)a3;

@end
