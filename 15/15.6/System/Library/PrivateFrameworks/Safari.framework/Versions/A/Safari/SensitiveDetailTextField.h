@class NSString;

@interface SensitiveDetailTextField : NSTextField {
    NSString *_sensitiveStringValue;
}

@property (copy, nonatomic) NSString *sensitiveStringValue;

- (void).cxx_destruct;
- (char)becomeFirstResponder;
- (void)textDidEndEditing:(id)a0;
- (id)_obscuredStringValue;

@end
