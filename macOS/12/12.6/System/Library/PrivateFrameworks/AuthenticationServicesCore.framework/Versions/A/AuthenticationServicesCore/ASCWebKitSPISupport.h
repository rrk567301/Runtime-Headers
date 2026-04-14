@interface ASCWebKitSPISupport : NSObject

@property (class, nonatomic) BOOL shouldUseAlternateCredentialStore;

+ (void)resetCredentialStore;
+ (void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id /* block */)a0;

@end
