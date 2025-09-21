@class NSArray, NSString;
@protocol CNCoreRecentsLibraryFacadeQueryHandler;

@interface CNCoreRecentsLibraryFacade : NSObject <CNCoreRecentsLibraryFacadeQueryHandler, CNCoreRecentsLibraryProviding>

@property (retain, nonatomic) NSArray *domains;
@property (readonly, weak, nonatomic) id<CNCoreRecentsLibraryFacadeQueryHandler> queryHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)facadeErrorWithUnderlyingError:(id)a0;
+ (id)facadeErrorWithCode:(long long)a0;
+ (id)facadeErrorWithCode:(long long)a0 underlyingError:(id)a1;

- (void).cxx_destruct;
- (id)contactsWithPhoneNumbers:(id)a0 error:(out id *)a1;
- (id)_contactsForQuery:(id)a0 error:(out id *)a1;
- (id)_queryForContactsWithEmailAddresses:(id)a0 singleResult:(BOOL)a1;
- (id)_queryForContactsWithHandles:(id)a0;
- (id)_queryForContactsWithHandlesMatchingString:(id)a0;
- (id)_queryForContactsWithName:(id)a0 prefixSearch:(BOOL)a1;
- (id)_queryForContactsWithPhoneNumbers:(id)a0 singleResult:(BOOL)a1;
- (id)_recentIdentifiersForContacts:(id)a0;
- (id)acceptedIntroductionsContainer;
- (id)allContactsFromDomains:(id)a0 error:(out id *)a1;
- (id)allContactsWithError:(out id *)a0;
- (BOOL)areSupportedDomains:(id)a0;
- (id)contactsWithEmailAddresses:(id)a0 error:(out id *)a1;
- (id)contactsWithHandles:(id)a0 error:(out id *)a1;
- (id)contactsWithHandlesMatchingString:(id)a0 error:(out id *)a1;
- (id)contactsWithInternalIdentifiers:(id)a0 error:(out id *)a1;
- (id)contactsWithName:(id)a0 prefixSearch:(BOOL)a1 error:(out id *)a2;
- (id)containersForIdentifiers:(id)a0;
- (long long)countAllContactsFromDomains:(id)a0 error:(out id *)a1;
- (long long)countAllContactsWithError:(out id *)a0;
- (long long)countOfContactsWithEmailAddresses:(id)a0 error:(out id *)a1;
- (long long)countOfContactsWithHandles:(id)a0 error:(out id *)a1;
- (long long)countOfContactsWithName:(id)a0 prefixSearch:(BOOL)a1 error:(out id *)a2;
- (long long)countOfContactsWithPhoneNumbers:(id)a0 error:(out id *)a1;
- (long long)countOfRecentContactsForQuery:(id)a0 error:(out id *)a1;
- (BOOL)deleteContacts:(id)a0 error:(out id *)a1;
- (id)initWithDomains:(id)a0;
- (id)initWithDomains:(id)a0 queryHandler:(id)a1;
- (id)recentContactsForQuery:(id)a0 error:(out id *)a1;
- (id)recentContactsWithIDs:(id)a0 error:(out id *)a1;
- (BOOL)removeRecentContactsWithRecentIDs:(id)a0 recentsDomain:(id)a1 error:(out id *)a2;
- (id)singleContactWithEmailAddress:(id)a0 error:(out id *)a1;
- (id)singleContactWithPhoneNumber:(id)a0 error:(out id *)a1;

@end
