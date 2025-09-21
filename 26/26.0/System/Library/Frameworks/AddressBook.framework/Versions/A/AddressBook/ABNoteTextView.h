@interface ABNoteTextView : NSTextView

@property (nonatomic) BOOL needsCardViewBorderDrawing;

- (BOOL)allowsVibrancy;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)insertBacktab:(id)a0;
- (void)insertTab:(id)a0;

@end
