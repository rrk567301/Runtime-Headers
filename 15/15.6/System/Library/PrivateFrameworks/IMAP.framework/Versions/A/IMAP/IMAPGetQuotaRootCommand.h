@interface IMAPGetQuotaRootCommand : IMAPMailboxCommand

- (id)activityString;
- (id)commandTypeString;
- (char)shouldSendAgainOnError;

@end
