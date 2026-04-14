@class NSString;

@interface ISS_MMAccount : NSObject <ISS_MMCredential, ISS_MMPrincipal> {
    id _identity;
    NSString *_principalID;
}

+ (id)principalIDWithName:(id)a0 andOwner:(id)a1;

- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)name;
- (id)password;
- (id)owner;
- (id)applicationName;
- (id)applicationID;
- (void)_setName:(id)a0;
- (void)_setPassword:(id)a0;
- (void)setApplicationName:(id)a0;
- (void)setApplicationID:(id)a0;
- (id)_userAgent;
- (id)_applicationPrefix;
- (void)setManagedName:(id)a0;
- (id)_diskURL;
- (void)_setApplicationID:(id)a0;
- (void)_setApplicationPrefix:(id)a0;
- (void)_setDiskHost:(id)a0 port:(int)a1 scheme:(id)a2;
- (id)initWithName:(id)a0 password:(id)a1 applicationID:(id)a2;
- (id)managedName;
- (id)principalID;

@end
