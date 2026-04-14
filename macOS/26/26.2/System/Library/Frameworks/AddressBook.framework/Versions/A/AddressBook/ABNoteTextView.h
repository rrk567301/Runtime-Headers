@interface ABNoteTextView : NSTextView

@property (nonatomic) BOOL needsCardViewBorderDrawing;

- (void)insertTab:(id)a0;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)allowsVibrancy;
- (void)insertBacktab:(id)a0;

@end
