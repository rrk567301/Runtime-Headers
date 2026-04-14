@interface MDMClient : MDMClientCore

+ (id)sharedClient;

- (id)init;
- (BOOL)isManagedByMDM;

@end
