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

- (void)beginObservingChangeNotifications;
- (BOOL)isHandleStringWhitelisted:(id)a0;
- (id)requestForContactsInPermittedContainersWithHandles:(id)a0;
- (id)initWithContactStore:(id)a0;
- (void)setTestContainerFetcher:(id)a0;
- (id)requestForContactsInPermittedContainers;
- (id)allWhitelistedHandleStrings;
- (void).cxx_destruct;
- (id)whitelistedHandleStringsFromHandleStrings:(id)a0 error:(id *)a1;
- (id)initWithContactStore:(id)a0 notificationCenter:(id)a1;
- (id)allWhitelistedContacts:(id *)a0;
- (BOOL)isHandleStringWhitelisted:(id)a0 error:(id *)a1;
- (id)whitelistedHandleStringsFromHandleStrings:(id)a0;
- (id)allWhitelistedHandleStrings:(id *)a0;
- (id)init;
- (id)initWithContactStore:(id)a0 accountStore:(id)a1 notificationCenter:(id)a2;
- (id)requestForNonUnifiedContacts;
- (void)dealloc;

@end
