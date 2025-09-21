@interface ICNFIMAPClientGetQuotaRootOperation : ICNFIMAPClientMailboxOperation

- (id)activityString;
- (id)commandTypeString;
- (char)shouldSendAgainOnError;

@end
