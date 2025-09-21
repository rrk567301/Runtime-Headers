@interface IMAPExamineCommand : IMAPSelectCommand

- (char)readOnly;
- (id)activityString;
- (id)commandTypeString;

@end
