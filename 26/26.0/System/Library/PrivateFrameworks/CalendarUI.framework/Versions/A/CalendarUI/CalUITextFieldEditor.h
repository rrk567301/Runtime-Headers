@protocol CalUITextFieldEditorDelegate;

@interface CalUITextFieldEditor : NSTextView

@property BOOL shouldAllowVibrancy;
@property (weak) id<CalUITextFieldEditorDelegate> calUITextFieldDelegate;

- (void)selectAll:(id)a0;
- (void)mouseDown:(id)a0;
- (BOOL)allowsVibrancy;
- (void)keyDown:(id)a0;
- (void)copy:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isRichText;
- (BOOL)readSelectionFromPasteboard:(id)a0;
- (id)readablePasteboardTypes;
- (BOOL)writeSelectionToPasteboard:(id)a0 type:(id)a1;

@end
