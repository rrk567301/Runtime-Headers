@class CNAvatarImageRenderer, NSString, EMCachingContactStore;

@interface MUIContactStoreProvider : NSObject <MUIContactsProvider>

@property (retain, nonatomic) EMCachingContactStore *contactStore;
@property (retain, nonatomic) CNAvatarImageRenderer *renderer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContactStore:(id)a0;
- (void).cxx_destruct;
- (BOOL)contactExistsForEmailAddress:(id)a0;
- (id)_contactForEmailAddress:(id)a0;
- (id)contactResultForContext:(id)a0;

@end
