@class NSString, EMCachingContactStore, CNAvatarImageRenderer, NSObject;
@protocol OS_os_log;

@interface MUIContactStoreProvider : NSObject <EFLoggable, MUIContactsProvider>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) EMCachingContactStore *contactStore;
@property (retain, nonatomic) CNAvatarImageRenderer *renderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0;
- (BOOL)contactExistsForEmailAddress:(id)a0;
- (id)_contactForEmailAddress:(id)a0;
- (id)contactResultForContext:(id)a0;

@end
