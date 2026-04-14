@class NSCache, CNContactStore, NSObject;
@protocol OS_dispatch_queue;

@interface SearchUIContactStore : NSObject

@property (retain, nonatomic) NSCache *contactCache;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *contactFetchingQueue;

+ (id)sharedStore;
+ (id)contactForPhoneNumber:(id)a0 email:(id)a1;
+ (id)placeholderContact;
+ (id)viewControllerDescriptorKeys;

- (id)init;
- (void).cxx_destruct;
- (id)contactForIdentifier:(id)a0;
- (id)cachedContactForIdentifier:(id)a0;
- (id)cachedContactsForIdentifiers:(id)a0 withKeyDescriptors:(id)a1;
- (id)contactsForIdentifiers:(id)a0 withKeys:(id)a1;
- (void)fetchContactForIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchContactsForIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchContactsForIdentifiers:(id)a0 withKeyDescriptors:(id)a1 completionHandler:(id /* block */)a2;

@end
