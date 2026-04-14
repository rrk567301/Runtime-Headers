@interface IATextInputActionsSessionInsertionAction : IATextInputActionsSessionAction

@property (nonatomic) unsigned long long textLength;
@property (nonatomic) unsigned long long options;
@property (nonatomic) unsigned long long emojiCount;

- (id)description;
- (BOOL)changedContent;
- (long long)inputActionCount;
- (long long)mergeActionIfPossible:(id)a0;

@end
