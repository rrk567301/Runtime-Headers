@class CNContactStore, NSNotificationCenter;
@protocol CNDowntimeWhitelistContainerFetching, NSObject;

@interface CNDowntimeWhitelist : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<NSObject> contactStoreDidChangeNotificationToken;
@property (readonly, nonatomic) id<CNDowntimeWhitelistContainerFetching> containerFetcher;

+ (id)os_log;
+ (char)anyContactIsWhitelisted:(id)a0;
+ (char)isWhitelistedContact:(id)a0;
+ (id)keyDescriptor;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)allWhitelistedContacts:(id *)a0;
- (id)allWhitelistedHandleStrings;
- (id)allWhitelistedHandleStrings:(id *)a0;
- (void)beginObservingChangeNotifications;
- (id)initWithContactStore:(id)a0;
- (id)initWithContactStore:(id)a0 accountStore:(id)a1 notificationCenter:(id)a2;
- (id)initWithContactStore:(id)a0 notificationCenter:(id)a1;
- (char)isHandleStringWhitelisted:(id)a0;
- (char)isHandleStringWhitelisted:(id)a0 error:(id *)a1;
- (id)requestForContactsInPermittedContainers;
- (id)requestForContactsInPermittedContainersWithHandles:(id)a0;
- (id)requestForNonUnifiedContacts;
- (void)setTestContainerFetcher:(id)a0;
- (id)whitelistedHandleStringsFromHandleStrings:(id)a0;
- (id)whitelistedHandleStringsFromHandleStrings:(id)a0 error:(id *)a1;

@end
