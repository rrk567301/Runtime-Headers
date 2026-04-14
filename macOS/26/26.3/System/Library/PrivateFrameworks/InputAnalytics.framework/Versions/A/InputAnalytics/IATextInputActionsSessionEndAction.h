@class NSDictionary;

@interface IATextInputActionsSessionEndAction : IATextInputActionsSessionAction

@property (copy, nonatomic) NSDictionary *keyboardTrialParameters;

+ (BOOL)supportsSecureCoding;

- (id)initFromDictionary:(id)a0;
- (id)description;
- (id)toDictionary;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)inputActionCount;
- (void)encodeWithCoder:(id)a0;

@end
