@interface IATextInputActionsSessionReplaceTextAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long options;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initFromDictionary:(id)a0;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (BOOL)changedContent;
- (BOOL)isCapableOfTextInsertion;
- (long long)mergeActionIfPossible:(id)a0;

@end
