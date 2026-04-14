@protocol AAKeychainManagerStore;

@interface AASignedOutAccountKeychain : NSObject {
    id<AAKeychainManagerStore> _keychainManager;
}

- (id)init;
- (void).cxx_destruct;
- (id)_lastSignedOutAccountDescriptor;
- (void)deleteLastSignedOutAccountAltDSID:(id *)a0;
- (id)fetchLastSignedOutAccountAltDSID:(id *)a0;
- (id)initWithKeychainManagerStore:(id)a0;
- (void)setLastSignedOutAccountAltDSID:(id)a0 error:(id *)a1;

@end
