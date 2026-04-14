@interface NSFindPatternFieldEditor : NSTextView

+ (BOOL)_usesTextLayoutManager;
+ (id)findPatternFieldEditorForWindow:(id)a0;

- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)writablePasteboardTypes;
- (BOOL)writeSelectionToPasteboard:(id)a0 type:(id)a1;
- (BOOL)usesFontPanel;
- (void)setUsesFontPanel:(BOOL)a0;
- (id)acceptableDragTypes;
- (id)readablePasteboardTypes;
- (BOOL)readSelectionFromPasteboard:(id)a0 type:(id)a1;

@end
