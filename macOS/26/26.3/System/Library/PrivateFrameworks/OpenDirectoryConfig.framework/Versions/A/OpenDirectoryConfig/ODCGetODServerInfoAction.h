@class NSString;

@interface ODCGetODServerInfoAction : ODCAction

@property (copy) NSString *serverName;

+ (long long)securityLevelFromResponse:(id)a0;

- (void)serverInfo;
- (id)init;
- (void)dealloc;
- (void)setResults:(id)a0;
- (void)_setResults:(id)a0;
- (void)legacyServerInfo;
- (void)startExecution;

@end
