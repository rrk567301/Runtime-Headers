@interface ECPOPAccount : ECAccount

@property (nonatomic) long long bigMessageWarningSize;
@property (nonatomic) long long daysAfterDownloadToDeleteMessagesFromServer;
@property (readonly, nonatomic) char daysAfterDownloadToDeleteMessagesFromServerIsSet;
@property (nonatomic) long long deletionPolicy;
@property (nonatomic) char hasNotFinishedFirstTimeSync;

+ (id)standardPorts;
+ (id)standardSSLPorts;

- (long long)defaultPortNumber;
- (long long)defaultSecurePortNumber;

@end
