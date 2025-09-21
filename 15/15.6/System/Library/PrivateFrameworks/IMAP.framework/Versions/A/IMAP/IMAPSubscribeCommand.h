@interface IMAPSubscribeCommand : IMAPMailboxCommand

- (id)activityString;
- (id)commandTypeString;
- (char)executeOnConnection:(id)a0;

@end
