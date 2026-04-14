@interface SUOSUSplatRollbackController : NSObject

+ (BOOL)splatRollbackDisabled;
+ (id)currentSplatProductWithError:(id *)a0;
+ (id)currentBaseOSProductWithError:(id *)a0;
+ (BOOL)splatRollbackAvailable;
+ (void)rollbackSplatWithOptions:(id)a0 withProgressCompletion:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)rollbackSplatWithOptions:(id)a0 withCompletion:(id /* block */)a1;
+ (BOOL)securityResponseRollbackSuggested:(id)a0;
+ (BOOL)quitAllRunningApplicationsForce:(BOOL)a0;

@end
