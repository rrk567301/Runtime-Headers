@interface ABNoteTextView : NSTextView

@property (nonatomic) char needsCardViewBorderDrawing;

- (char)allowsVibrancy;
- (char)becomeFirstResponder;
- (void)insertBacktab:(id)a0;
- (void)insertTab:(id)a0;
- (char)resignFirstResponder;

@end
