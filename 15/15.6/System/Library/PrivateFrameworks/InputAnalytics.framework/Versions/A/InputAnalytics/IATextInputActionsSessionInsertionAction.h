@interface IATextInputActionsSessionInsertionAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long withAlternativesCount;

+ (char)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)changedContent;
- (long long)inputActionCount;
- (char)isCapableOfTextInsertion;
- (long long)mergeActionIfPossible:(id)a0;

@end
