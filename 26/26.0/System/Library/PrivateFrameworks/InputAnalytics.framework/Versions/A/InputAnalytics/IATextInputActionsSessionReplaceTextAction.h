@interface IATextInputActionsSessionReplaceTextAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long options;

+ (BOOL)supportsSecureCoding;

- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (BOOL)changedContent;
- (BOOL)isCapableOfTextInsertion;
- (long long)mergeActionIfPossible:(id)a0;

@end
