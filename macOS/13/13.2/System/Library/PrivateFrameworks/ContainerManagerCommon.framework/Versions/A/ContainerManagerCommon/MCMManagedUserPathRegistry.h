@class MCMUserIdentity, MCMManagedPath;

@interface MCMManagedUserPathRegistry : MCMManagedPathRegistry

@property (readonly, nonatomic) MCMUserIdentity *userIdentity;
@property (readonly, nonatomic) MCMManagedPath *userHome;
@property (readonly, nonatomic) MCMManagedPath *userLibrary;
@property (readonly, nonatomic) MCMManagedPath *containermanagerUserLibrary;
@property (readonly, nonatomic) MCMManagedPath *appScripts;
@property (readonly, nonatomic) MCMManagedPath *preferences;
@property (readonly, nonatomic) MCMManagedPath *autosave;
@property (readonly, nonatomic) MCMManagedPath *savedApplicationState;

- (void).cxx_destruct;
- (id)initWithUserIdentity:(id)a0 daemonUser:(id)a1;
- (void)_initPathPropertiesWithUserHomeDirectoryURL:(id)a0 clientUser:(id)a1;

@end
