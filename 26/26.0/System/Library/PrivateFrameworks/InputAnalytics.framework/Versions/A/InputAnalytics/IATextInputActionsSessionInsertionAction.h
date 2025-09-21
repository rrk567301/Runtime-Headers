@interface IATextInputActionsSessionInsertionAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long withAlternativesCount;

+ (BOOL)supportsSecureCoding;

- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (long long)inputActionCount;
- (BOOL)changedContent;
- (BOOL)isCapableOfTextInsertion;
- (long long)mergeActionIfPossible:(id)a0;

@end
