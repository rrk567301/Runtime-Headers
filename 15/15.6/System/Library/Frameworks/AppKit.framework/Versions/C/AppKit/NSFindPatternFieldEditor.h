@interface NSFindPatternFieldEditor : NSTextView

+ (id)findPatternFieldEditorForWindow:(id)a0;

- (char)respondsToSelector:(SEL)a0;
- (id)acceptableDragTypes;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)readSelectionFromPasteboard:(id)a0 type:(id)a1;
- (id)readablePasteboardTypes;
- (void)setUsesFontPanel:(char)a0;
- (char)supportsAdaptiveImageGlyph;
- (char)usesFontPanel;
- (id)writablePasteboardTypes;
- (char)writeSelectionToPasteboard:(id)a0 type:(id)a1;

@end
