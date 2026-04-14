@interface IATextInputActionsSessionReplaceWithCandidateAction : IATextInputActionsSessionAction

@property (nonatomic) long long replaceWithCandidateType;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initFromDictionary:(id)a0;
- (id)toDictionary;
- (id)initWithCoder:(id)a0;
- (BOOL)changedContent;
- (BOOL)isCapableOfTextInsertion;

@end
