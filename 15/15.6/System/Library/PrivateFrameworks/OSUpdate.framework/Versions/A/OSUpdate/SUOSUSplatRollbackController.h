@interface SUOSUSplatRollbackController : NSObject

+ (char)splatRollbackDisabled;
+ (id)currentBaseOSProductWithError:(id *)a0;
+ (id)currentSplatProductWithError:(id *)a0;
+ (char)quitAllRunningApplicationsForce:(char)a0;
+ (void)rollbackSplatWithOptions:(id)a0 withCompletion:(id /* block */)a1;
+ (char)securityResponseRollbackSuggested:(id)a0;
+ (char)splatRollbackAvailable;

@end
