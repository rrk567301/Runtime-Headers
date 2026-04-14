@class NSDictionary;

@interface IATextInputActionsSessionEndAction : IATextInputActionsSessionAction

@property (copy, nonatomic) NSDictionary *keyboardTrialParameters;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (long long)inputActionCount;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)toDictionary;
- (id)initFromDictionary:(id)a0;

@end
