@class NSDictionary;

@interface IATextInputActionsSessionEndAction : IATextInputActionsSessionAction

@property (copy, nonatomic) NSDictionary *keyboardTrialParameters;

+ (BOOL)supportsSecureCoding;

- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (long long)inputActionCount;
- (void).cxx_destruct;

@end
