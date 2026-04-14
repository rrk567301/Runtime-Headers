@interface ASCWebKitSPISupport : NSObject

@property (class, nonatomic) BOOL shouldUseAlternateCredentialStore;

+ (BOOL)arePasskeysDisallowedForRelyingParty:(id)a0;
+ (void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id /* block */)a0;
+ (void)getArePasskeysDisallowedForRelyingParty:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (void)resetCredentialStore;

@end
