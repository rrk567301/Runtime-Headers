@class NSTextView;

@interface CalUITextFieldCell : NSTextFieldCell

@property (retain) NSTextView *fieldEditor;

- (void).cxx_destruct;
- (id)init;
- (id)fieldEditorForView:(id)a0;
- (void)configureWithFont:(id)a0 textColor:(id)a1 linkColor:(id)a2;

@end
