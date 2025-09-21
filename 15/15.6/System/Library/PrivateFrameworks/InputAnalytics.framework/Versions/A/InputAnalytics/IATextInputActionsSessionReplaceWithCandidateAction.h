@interface IATextInputActionsSessionReplaceWithCandidateAction : IATextInputActionsSessionAction

@property (nonatomic) long long replaceWithCandidateType;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)changedContent;
- (char)isCapableOfTextInsertion;

@end
