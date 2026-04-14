@class NSArray;
@protocol CNUICoreContactStoreFacade;

@interface CNUICoreContactRefetcher : NSObject

@property (readonly, nonatomic) id<CNUICoreContactStoreFacade> contactStore;
@property (readonly, nonatomic) NSArray *contactsToRefetch;
@property (readonly, nonatomic) NSArray *keysToFetch;

+ (id)refetchedContacts:(id)a0 fromStore:(id)a1 keysToFetch:(id)a2;
+ (id)contactsByReplacingContacts:(id)a0 withContactsHavingMatchingIdentifier:(id)a1;
+ (id)contactsFoundAndNotFoundByPartioningContacts:(id)a0 usingFoundContacts:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)allContacts;
- (id)initWithContactStore:(id)a0 contactsToRefetch:(id)a1 keysToFetch:(id)a2;
- (id)initWithContactStore:(id)a0 contactsToRefetch:(id)a1;
- (id)foundContacts;
- (id)contactsFoundAndNotFound;

@end
