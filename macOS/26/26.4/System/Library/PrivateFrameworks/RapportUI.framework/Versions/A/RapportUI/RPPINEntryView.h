@class NSArray, NSString, NSMutableString;

@interface RPPINEntryView : NSView {
    NSMutableString *_text;
}

@property (nonatomic) BOOL alphaNumeric;
@property (retain, nonatomic) NSArray *fields;
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) id /* block */ textChangedHandler;

- (BOOL)hasText;
- (void)cut:(id)a0;
- (void)insertText:(id)a0;
- (void)viewWillMoveToWindow:(id)a0;
- (void)paste:(id)a0;
- (BOOL)acceptsFirstResponder;
- (void)copy:(id)a0;
- (void)keyDown:(id)a0;
- (void).cxx_destruct;
- (void)delete:(id)a0;
- (void)deleteBackward:(id)a0;
- (void)_updateFields;

@end
