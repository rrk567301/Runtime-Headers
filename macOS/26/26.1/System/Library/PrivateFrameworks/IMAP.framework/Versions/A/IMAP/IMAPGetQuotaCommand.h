@class NSString;

@interface IMAPGetQuotaCommand : IMAPSingleCommand

@property (readonly, copy, nonatomic) NSString *quotaRoot;

- (void).cxx_destruct;
- (id)activityString;
- (id)init;
- (id)commandTypeString;
- (id)initWithQuotaRoot:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (BOOL)shouldSendAgainOnError;

@end
