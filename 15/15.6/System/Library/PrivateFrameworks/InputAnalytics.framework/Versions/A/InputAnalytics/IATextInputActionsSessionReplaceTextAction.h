@interface IATextInputActionsSessionReplaceTextAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long options;

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)changedContent;
- (char)isCapableOfTextInsertion;
- (long long)mergeActionIfPossible:(id)a0;

@end
