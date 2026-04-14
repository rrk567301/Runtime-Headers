@class NSString;

@interface WFInputTextDialogResponse : WFDialogResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *inputtedText;

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithInputtedText:(id)a0 cancelled:(BOOL)a1;
- (id)initWithResponseCode:(long long)a0;

@end
