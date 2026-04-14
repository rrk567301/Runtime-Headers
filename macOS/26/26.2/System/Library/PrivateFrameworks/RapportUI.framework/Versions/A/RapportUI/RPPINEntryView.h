@class NSArray, NSString, NSMutableString;

@interface RPPINEntryView : NSView {
    NSMutableString *_text;
}

@property (nonatomic) BOOL alphaNumeric;
@property (retain, nonatomic) NSArray *fields;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) id /* block */ textChangedHandler;

- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)hasText;
- (void)paste:(id)a0;
- (void).cxx_destruct;
- (void)insertText:(id)a0;
- (void)cut:(id)a0;
- (void)copy:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)keyDown:(id)a0;
- (void)delete:(id)a0;
- (void)deleteBackward:(id)a0;
- (void)_updateFields;

@end
