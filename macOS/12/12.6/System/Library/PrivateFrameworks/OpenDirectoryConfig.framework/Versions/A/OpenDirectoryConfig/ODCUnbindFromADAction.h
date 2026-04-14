@class NSString;

@interface ODCUnbindFromADAction : ODCAction

@property (copy) NSString *userName;
@property (copy) NSString *password;
@property BOOL removeDomainFromSearchPaths;
@property BOOL forceUnbind;

- (id)init;
- (void)unbind;
- (void)startExecution;
- (void)legacyUnbind;

@end
