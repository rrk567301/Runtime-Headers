@class NSArray, NSString, NSMutableString;

@interface RPPINEntryView : NSView {
    NSMutableString *_text;
}

@property (nonatomic) char alphaNumeric;
@property (retain, nonatomic) NSArray *fields;
@property (nonatomic) char enabled;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) id /* block */ textChangedHandler;

- (void).cxx_destruct;
- (void)deleteBackward:(id)a0;
- (void)delete:(id)a0;
- (char)acceptsFirstResponder;
- (void)copy:(id)a0;
- (void)cut:(id)a0;
- (void)insertText:(id)a0;
- (void)keyDown:(id)a0;
- (void)paste:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (char)hasText;
- (void)_updateFields;

@end
