@interface IATextInputActionsSessionReplaceWithCandidateAction : IATextInputActionsSessionAction

@property (nonatomic) long long replaceWithCandidateType;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)toDictionary;
- (id)initFromDictionary:(id)a0;
- (BOOL)changedContent;
- (BOOL)isCapableOfTextInsertion;

@end
