@class NSDictionary;

@interface IATextInputActionsSessionEndAction : IATextInputActionsSessionAction

@property (copy, nonatomic) NSDictionary *keyboardTrialParameters;

+ (char)supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)inputActionCount;

@end
