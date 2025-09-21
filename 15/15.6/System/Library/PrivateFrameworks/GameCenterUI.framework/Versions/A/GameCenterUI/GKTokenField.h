@interface GKTokenField : NSTokenField

@property (nonatomic) char expectingCurrentEditor;

- (char)becomeFirstResponder;
- (char)resignFirstResponder;
- (void)textDidEndEditing:(id)a0;

@end
