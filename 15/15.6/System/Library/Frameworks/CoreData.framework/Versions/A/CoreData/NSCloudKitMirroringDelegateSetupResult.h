@class CKContainer, CKDatabase;

@interface NSCloudKitMirroringDelegateSetupResult : NSCloudKitMirroringResult {
    CKContainer *_container;
    CKDatabase *_database;
}

- (void)dealloc;
- (id)initWithRequest:(id)a0 storeIdentifier:(id)a1 success:(char)a2 error:(id)a3 container:(id)a4 database:(id)a5;

@end
