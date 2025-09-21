@class NSString;

@interface ODCUnbindFromADAction : ODCAction

@property (copy) NSString *userName;
@property (copy) NSString *password;
@property BOOL removeDomainFromSearchPaths;
@property BOOL forceUnbind;

- (void)unbind;
- (id)init;
- (void)legacyUnbind;
- (void)startExecution;

@end
