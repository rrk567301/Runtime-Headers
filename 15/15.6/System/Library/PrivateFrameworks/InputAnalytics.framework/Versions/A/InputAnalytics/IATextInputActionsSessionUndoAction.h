@interface IATextInputActionsSessionUndoAction : IATextInputActionsSessionAction

- (char)changedContent;
- (char)isCapableOfTextInsertion;

@end
