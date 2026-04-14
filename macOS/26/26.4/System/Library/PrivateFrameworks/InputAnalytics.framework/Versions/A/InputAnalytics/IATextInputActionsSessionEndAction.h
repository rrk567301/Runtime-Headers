@class NSDictionary;

@interface IATextInputActionsSessionEndAction : IATextInputActionsSessionAction

@property (copy, nonatomic) NSDictionary *keyboardTrialParameters;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0;
- (long long)inputActionCount;
- (id)description;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;

@end
