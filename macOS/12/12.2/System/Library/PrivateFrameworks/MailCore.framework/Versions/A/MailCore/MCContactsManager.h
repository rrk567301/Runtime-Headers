@class CNContactStore, CNContact, NSMutableDictionary, NSOperationQueue, CNAvatarCache, NSObject;

@interface MCContactsManager : NSObject {
    NSMutableDictionary *_contactsCache;
    NSObject *_contactsCacheLock;
}

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) NSOperationQueue *contactsUpdateQueue;
@property (readonly, copy, nonatomic) CNContact *meContact;
@property (readonly, nonatomic) CNAvatarCache *avatarCache;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)_defaultKeyDescriptors;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_contactsChanged:(id)a0;
- (id)contactForAddress:(id)a0;
- (void)fetchContactForAddress:(id)a0 withCompletion:(id /* block */)a1;

@end
