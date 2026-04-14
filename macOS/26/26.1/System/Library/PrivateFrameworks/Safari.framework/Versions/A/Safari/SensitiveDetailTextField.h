@class NSString;

@interface SensitiveDetailTextField : NSTextField {
    NSString *_sensitiveStringValue;
}

@property (copy, nonatomic) NSString *sensitiveStringValue;

- (BOOL)becomeFirstResponder;
- (void).cxx_destruct;
- (void)textDidEndEditing:(id)a0;
- (id)_obscuredStringValue;

@end
