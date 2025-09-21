@protocol CalUITextFieldEditorDelegate;

@interface CalUITextFieldEditor : NSTextView

@property char shouldAllowVibrancy;
@property (weak) id<CalUITextFieldEditorDelegate> calUITextFieldDelegate;

- (id)init;
- (void).cxx_destruct;
- (char)allowsVibrancy;
- (void)copy:(id)a0;
- (char)isRichText;
- (void)keyDown:(id)a0;
- (void)mouseDown:(id)a0;
- (char)readSelectionFromPasteboard:(id)a0;
- (id)readablePasteboardTypes;
- (void)selectAll:(id)a0;
- (char)writeSelectionToPasteboard:(id)a0 type:(id)a1;

@end
