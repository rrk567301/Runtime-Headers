@class NSString, NSMutableDictionary;

@interface ISS_MMIdentityStore : NSObject <ISS_MMCredential> {
    NSMutableDictionary *_credential_info;
    NSString *_app_id;
    NSString *_app_name;
    NSString *_app_prefix;
}

- (void)finalize;
- (void)dealloc;
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
- (void)_setOwner:(id)a0;
- (id)initWithName:(id)a0 password:(id)a1 owner:(id)a2 applicationID:(id)a3;
- (void)_setApplicationID:(id)a0;
- (id)_applicationPrefix;
- (void)_setApplicationPrefix:(id)a0;
- (void)setManagedName:(id)a0;
- (id)managedName;
- (void)_setDiskHost:(id)a0 port:(int)a1 scheme:(id)a2;
- (id)_diskURL;
- (id)_credentialInfo;

@end
