@interface IATextInputActionsSessionSelectionAction : IATextInputActionsSessionAction

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeAfter;

+ (char)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (long long)mergeActionIfPossible:(id)a0;
- (long long)textInputActionsType;

@end
