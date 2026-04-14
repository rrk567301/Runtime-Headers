@interface ECPOPAccount : ECAccount

@property (nonatomic) long long bigMessageWarningSize;
@property (nonatomic) long long daysAfterDownloadToDeleteMessagesFromServer;
@property (readonly, nonatomic) BOOL daysAfterDownloadToDeleteMessagesFromServerIsSet;
@property (nonatomic) long long deletionPolicy;
@property (nonatomic) BOOL hasNotFinishedFirstTimeSync;

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (long long)defaultSecurePortNumber;
- (long long)defaultPortNumber;

@end
