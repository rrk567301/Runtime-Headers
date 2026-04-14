@class NSString;

@interface ODCGetODServerInfoAction : ODCAction

@property (copy) NSString *serverName;

+ (long long)securityLevelFromResponse:(id)a0;

- (void)serverInfo;
- (void)setResults:(id)a0;
- (void)dealloc;
- (id)init;
- (void)_setResults:(id)a0;
- (void)legacyServerInfo;
- (void)startExecution;

@end
