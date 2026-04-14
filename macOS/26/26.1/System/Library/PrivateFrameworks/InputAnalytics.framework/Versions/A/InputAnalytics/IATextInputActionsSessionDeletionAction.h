@interface IATextInputActionsSessionDeletionAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long options;

+ (BOOL)supportsSecureCoding;

- (id)toDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (long long)inputActionCount;
- (id)initFromDictionary:(id)a0;
- (BOOL)changedContent;
- (long long)mergeActionIfPossible:(id)a0;

@end
