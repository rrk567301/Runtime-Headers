@interface IATextInputActionsSessionDeletionAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long removedTextLength;
@property (nonatomic) unsigned long long removedEmojiCount;
@property (nonatomic) unsigned long long options;

- (id)description;
- (BOOL)changedContent;
- (long long)inputActionCount;
- (long long)mergeActionIfPossible:(id)a0;

@end
