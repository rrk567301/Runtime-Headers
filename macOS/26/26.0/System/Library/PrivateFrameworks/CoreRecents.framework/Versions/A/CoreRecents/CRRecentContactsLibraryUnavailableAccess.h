@class NSString;

@interface CRRecentContactsLibraryUnavailableAccess : NSObject <CRRecentContactsLibraryAccess>

@property (readonly) int daemonProcessIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void)invalidate;
- (long long)countForQuery:(id)a0 error:(id *)a1;
- (BOOL)createContactEvents:(id)a0 domain:(id)a1 sendingAddress:(id)a2 source:(id)a3 error:(id *)a4;
- (void)deleteAllRecentContactsWithCompletion:(id /* block */)a0;
- (BOOL)deleteRecentContactsWithIdentifiers:(id)a0 syncKeys:(id)a1 domain:(id)a2 error:(id *)a3;
- (long long)deleteUsingQuery:(id)a0 error:(id *)a1;
- (void)executeSearch:(id)a0 completion:(id /* block */)a1;
- (id)executeSearch:(id)a0 error:(id *)a1;
- (id)recentContactsWithIdentifiers:(id)a0 error:(id *)a1;
- (id)restorePreviouslyDeletedRecentContacts:(id)a0 error:(id *)a1;

@end
