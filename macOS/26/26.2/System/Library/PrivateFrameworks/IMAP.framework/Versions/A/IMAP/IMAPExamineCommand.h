@interface IMAPExamineCommand : IMAPSelectCommand

- (id)activityString;
- (BOOL)readOnly;
- (id)commandTypeString;

@end
