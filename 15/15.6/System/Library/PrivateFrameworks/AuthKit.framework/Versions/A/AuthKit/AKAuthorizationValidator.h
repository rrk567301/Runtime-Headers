@interface AKAuthorizationValidator : NSObject

+ (char)_requirePasscodeSet;
+ (char)canPerformAuthorizationRequest:(id)a0 error:(id *)a1;
+ (char)canPerformCredentialRequest:(id)a0 error:(id *)a1;
+ (char)canPerformPasswordRequest:(id)a0 error:(id *)a1;
+ (char)shouldContinueWithResponse:(id)a0 error:(id *)a1;

@end
