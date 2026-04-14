@class CNContactStore, NSNotificationCenter;
@protocol CNDowntimeWhitelistContainerFetching, NSObject;

@interface CNDowntimeWhitelist : NSObject

@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, nonatomic) NSNotificationCenter *notificationCenter;
@property (readonly, nonatomic) id<NSObject> contactStoreDidChangeNotificationToken;
@property (readonly, nonatomic) id<CNDowntimeWhitelistContainerFetching> containerFetcher;

+ (id)os_log;
+ (BOOL)anyContactIsWhitelisted:(id)a0;
+ (BOOL)isWhitelistedContact:(id)a0;
+ (id)keyDescriptor;

- (id)initWithContactStore:(id)a0;
- (id)requestForContactsInPermittedContainersWithHandles:(id)a0;
- (void)dealloc;
- (id)allWhitelistedHandleStrings:(id *)a0;
- (void)beginObservingChangeNotifications;
- (id)init;
- (BOOL)isHandleStringWhitelisted:(id)a0 error:(id *)a1;
- (id)whitelistedHandleStringsFromHandleStrings:(id)a0 error:(id *)a1;
- (id)requestForNonUnifiedContacts;
- (id)whitelistedHandleStringsFromHandleStrings:(id)a0;
- (id)allWhitelistedHandleStrings;
- (id)initWithContactStore:(id)a0 notificationCenter:(id)a1;
- (id)initWithContactStore:(id)a0 accountStore:(id)a1 notificationCenter:(id)a2;
- (id)requestForContactsInPermittedContainers;
- (void)setTestContainerFetcher:(id)a0;
- (id)allWhitelistedContacts:(id *)a0;
- (BOOL)isHandleStringWhitelisted:(id)a0;
- (void).cxx_destruct;

@end
