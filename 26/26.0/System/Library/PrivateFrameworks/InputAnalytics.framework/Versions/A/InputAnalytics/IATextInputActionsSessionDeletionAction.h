@interface IATextInputActionsSessionDeletionAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long options;

+ (BOOL)supportsSecureCoding;

- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (long long)inputActionCount;
- (BOOL)changedContent;
- (long long)mergeActionIfPossible:(id)a0;

@end
