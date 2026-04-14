@class CNContactStore, NSString, CNContactProviderSession, CNXPCContactsSupport, CNUnfairLock;

@interface CNContactProvider : NSObject

@property (nonatomic) BOOL isAlmond;
@property (retain, nonatomic) CNContactStore *providerStore;
@property (retain, nonatomic) CNXPCContactsSupport *contactsSupport;
@property (readonly) CNUnfairLock *lock;
@property (retain, nonatomic) CNContactProviderSession *currentSession;
@property (readonly, nonatomic) CNContactStore *contactStore;
@property (readonly, copy, nonatomic) NSString *containerIdentifier;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;

- (id)init;
- (void).cxx_destruct;
- (void)endSession;
- (void)disableExtensionWithBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)disableWithCompletionHandler:(id /* block */)a0;
- (void)enableExtensionWithBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)enableWithCompletionHandler:(id /* block */)a0;
- (long long)fetchExtensionCountWithError:(id *)a0;
- (id)fetchExtensionItemsWithError:(id *)a0;
- (BOOL)isSessionRunning;
- (void)requestExtensionCommand:(id)a0 completionHandler:(id /* block */)a1;
- (void)startSession:(id)a0;
- (void)synchronizeUsingSession:(id)a0 completionHandler:(id /* block */)a1;

@end
