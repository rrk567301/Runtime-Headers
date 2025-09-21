@interface IATextInputActionsSessionDeletionAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long options;

+ (char)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)changedContent;
- (long long)inputActionCount;
- (long long)mergeActionIfPossible:(id)a0;

@end
