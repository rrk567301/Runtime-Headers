@class NSString;

@interface ODCUnbindFromADAction : ODCAction

@property (copy) NSString *userName;
@property (copy) NSString *password;
@property char removeDomainFromSearchPaths;
@property char forceUnbind;

- (id)init;
- (void)unbind;
- (void)legacyUnbind;
- (void)startExecution;

@end
