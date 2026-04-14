@interface NSTokenTextView : NSTextView

+ (id)trackingTokenTextView:(BOOL)a0;
+ (id)tokenTextViewForWindow:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)setDelegate:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDown:(id)a0;
- (void)insertText:(id)a0 replacementRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)rightMouseDown:(id)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)draggingEnded:(id)a0;
- (BOOL)performDragOperation:(id)a0;
- (void)insertNewline:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_detachFieldEditorFromWindow:(id)a0;
- (id)writablePasteboardTypes;
- (BOOL)writeSelectionToPasteboard:(id)a0 type:(id)a1;
- (id)acceptableDragTypes;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForUserCompletion;
- (id)tokenizingCharacterSet;
- (id)readablePasteboardTypes;
- (BOOL)readSelectionFromPasteboard:(id)a0 type:(id)a1;
- (BOOL)_characterAtIndex:(unsigned long long)a0 shouldTerminateString:(id)a1;
- (id)_tokenAttachmentForPoint:(struct CGPoint { double x0; double x1; })a0 glyphIndex:(out unsigned long long *)a1 drawingRect:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;

@end
