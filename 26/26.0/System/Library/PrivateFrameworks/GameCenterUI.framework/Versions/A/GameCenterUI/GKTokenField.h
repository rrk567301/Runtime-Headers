@interface GKTokenField : NSTokenField

@property (nonatomic) BOOL expectingCurrentEditor;

- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)textDidEndEditing:(id)a0;

@end
