@class NSString;

@interface IMAPGetQuotaCommand : IMAPSingleCommand

@property (readonly, copy, nonatomic) NSString *quotaRoot;

- (id)activityString;
- (void).cxx_destruct;
- (id)init;
- (id)commandTypeString;
- (id)initWithQuotaRoot:(id)a0;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (BOOL)shouldSendAgainOnError;

@end
