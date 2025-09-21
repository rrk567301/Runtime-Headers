@interface IATextInputActionsSessionReplaceWithCandidateAction : IATextInputActionsSessionAction

@property (nonatomic) long long replaceWithCandidateType;

+ (BOOL)supportsSecureCoding;

- (id)initFromDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)toDictionary;
- (BOOL)changedContent;
- (BOOL)isCapableOfTextInsertion;

@end
