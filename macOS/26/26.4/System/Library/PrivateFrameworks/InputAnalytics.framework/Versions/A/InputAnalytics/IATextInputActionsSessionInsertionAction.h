@interface IATextInputActionsSessionInsertionAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long withAlternativesCount;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initFromDictionary:(id)a0;
- (long long)inputActionCount;
- (id)description;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (BOOL)changedContent;
- (BOOL)isCapableOfTextInsertion;
- (long long)mergeActionIfPossible:(id)a0;

@end
