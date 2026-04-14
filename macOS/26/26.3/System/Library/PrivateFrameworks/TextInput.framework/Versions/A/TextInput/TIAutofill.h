@interface TIAutofill : NSObject

+ (BOOL)isSuggestingStrongPasswordsAvailable;
+ (void)sendAutofillCredentialCandidate:(id)a0 completionHandler:(id /* block */)a1;

@end
