@interface IATextInputActionsSessionSelectionAction : IATextInputActionsSessionAction

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeAfter;

+ (BOOL)supportsSecureCoding;

- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (long long)mergeActionIfPossible:(id)a0;
- (long long)textInputActionsType;

@end
