@class NSString;

@interface WFInputTextDialogResponse : WFDialogResponse <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *inputtedText;

+ (char)supportsBSXPCSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithInputtedText:(id)a0 cancelled:(char)a1;
- (id)initWithResponseCode:(long long)a0;

@end
