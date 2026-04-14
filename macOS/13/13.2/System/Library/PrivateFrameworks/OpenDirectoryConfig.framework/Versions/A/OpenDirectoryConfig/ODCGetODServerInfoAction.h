@class NSString;

@interface ODCGetODServerInfoAction : ODCAction

@property (copy) NSString *serverName;

+ (long long)securityLevelFromResponse:(id)a0;

- (void)dealloc;
- (id)init;
- (void)setResults:(id)a0;
- (void)serverInfo;
- (void)_setResults:(id)a0;
- (void)startExecution;
- (void)legacyServerInfo;

@end
