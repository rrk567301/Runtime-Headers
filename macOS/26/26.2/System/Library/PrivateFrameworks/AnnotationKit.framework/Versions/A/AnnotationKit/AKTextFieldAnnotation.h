@class NSString;

@interface AKTextFieldAnnotation : AKTextBoxAnnotation

@property (copy) NSString *fieldName;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
