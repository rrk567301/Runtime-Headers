@interface ABNoteTextView : NSTextView

@property (nonatomic) BOOL needsCardViewBorderDrawing;

- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)insertTab:(id)a0;
- (BOOL)allowsVibrancy;
- (void)insertBacktab:(id)a0;

@end
