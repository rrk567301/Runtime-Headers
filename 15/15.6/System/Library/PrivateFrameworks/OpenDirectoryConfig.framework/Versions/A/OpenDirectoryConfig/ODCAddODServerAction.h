@class NSString;

@interface ODCAddODServerAction : ODCAction

@property (copy) NSString *serverName;
@property (copy) NSString *userName;
@property (copy) NSString *password;
@property (copy) NSString *clientComputerID;
@property char errorOnOptionalAuthWithNoCredentials;
@property char forceBind;
@property char authBindOnlyIfRequired;
@property char useSSL;
@property char secureAuthOnly;
@property char manInMiddle;
@property char encryptionOnly;
@property char signPackets;
@property char addServerToSearchPaths;
@property char autoSSL;
@property char addCertificates;

+ (long long)securityLevelFromResponse:(id)a0;

- (id)init;
- (void)bind;
- (void)createTrust;
- (void)legacyBind;
- (void)startExecution;

@end
