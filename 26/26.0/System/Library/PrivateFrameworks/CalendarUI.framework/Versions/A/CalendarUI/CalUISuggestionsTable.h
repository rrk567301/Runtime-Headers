@class CalUISuggestionsField;

@interface CalUISuggestionsTable : NSTableView

@property (weak) CalUISuggestionsField *suggestionsField;

- (void)mouseDown:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseExited:(id)a0;
- (void).cxx_destruct;
- (void)mouseMoved:(id)a0;
- (void)selectRow:(unsigned long long)a0;
- (BOOL)moveDown;
- (BOOL)moveUp;

@end
