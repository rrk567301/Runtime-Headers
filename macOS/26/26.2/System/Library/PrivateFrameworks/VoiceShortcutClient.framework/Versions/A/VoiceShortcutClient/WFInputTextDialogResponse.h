@class NSString;

@interface WFInputTextDialogResponse : WFDialogResponse <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *inputtedText;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithBSXPCCoder:(id)a0;
- (id)initWithInputtedText:(id)a0 cancelled:(BOOL)a1;
- (id)initWithResponseCode:(long long)a0;

@end
