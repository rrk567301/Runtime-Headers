@class NSString;

@interface ODCGetODServerInfoAction : ODCAction

@property (copy) NSString *serverName;

+ (long long)securityLevelFromResponse:(id)a0;

- (void)setResults:(id)a0;
- (void)serverInfo;
- (void)dealloc;
- (id)init;
- (void)_setResults:(id)a0;
- (void)legacyServerInfo;
- (void)startExecution;

@end
