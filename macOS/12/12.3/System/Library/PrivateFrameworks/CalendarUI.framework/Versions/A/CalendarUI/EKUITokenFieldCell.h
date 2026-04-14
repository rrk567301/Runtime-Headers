@class NSTextView;

@interface EKUITokenFieldCell : NSTokenFieldCell

@property (retain) NSTextView *fieldEditor;

- (id)init;
- (void).cxx_destruct;
- (id)fieldEditorForView:(id)a0;
- (BOOL)_characterAtIndex:(unsigned long long)a0 shouldTerminateString:(id)a1;
- (id)_representedObjectsForString:(id)a0 andAttributedString:(id)a1 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (BOOL)calUITextFieldEditor:(id)a0 writeSelectionToPasteboard:(id)a1 type:(id)a2;
- (void)setCalUITextFieldDelegate:(id)a0;

@end
