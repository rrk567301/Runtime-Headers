@class NSString;

@interface ICNFIMAPClientGetQuotaOperation : ICNFIMAPSingleClientOperation

@property (readonly, copy, nonatomic) NSString *quotaRoot;

- (id)init;
- (void).cxx_destruct;
- (id)activityString;
- (id)commandTypeString;
- (long long)minRequiredConnectionState;
- (long long)maxAllowedConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;
- (BOOL)shouldSendAgainOnError;
- (id)initWithQuotaRoot:(id)a0;

@end
