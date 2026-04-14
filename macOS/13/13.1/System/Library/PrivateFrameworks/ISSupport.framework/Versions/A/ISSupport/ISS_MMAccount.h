@class NSString;

@interface ISS_MMAccount : NSObject <ISS_MMCredential, ISS_MMPrincipal> {
    id _identity;
    NSString *_principalID;
}

+ (id)principalIDWithName:(id)a0 andOwner:(id)a1;

- (void)dealloc;
- (id)name;
- (id)init;
- (void)finalize;
- (id)password;
- (id)owner;
- (id)applicationName;
- (id)applicationID;
- (void)_setName:(id)a0;
- (void)_setPassword:(id)a0;
- (void)setApplicationName:(id)a0;
- (void)setApplicationID:(id)a0;
- (id)_userAgent;
- (id)principalID;
- (id)initWithName:(id)a0 password:(id)a1 applicationID:(id)a2;
- (void)_setApplicationID:(id)a0;
- (id)_applicationPrefix;
- (void)_setApplicationPrefix:(id)a0;
- (void)setManagedName:(id)a0;
- (id)managedName;
- (void)_setDiskHost:(id)a0 port:(int)a1 scheme:(id)a2;
- (id)_diskURL;

@end
