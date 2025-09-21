@class NSString;

@interface ODCRemoveODServerAction : ODCAction

@property (copy) NSString *serverName;
@property (copy) NSString *userName;
@property (copy) NSString *password;
@property char forceUnbind;
@property char removeServerFromSearchPaths;

- (id)init;
- (void)unbind;
- (void)removeTrust;
- (void)legacyUnbind;
- (void)startExecution;

@end
