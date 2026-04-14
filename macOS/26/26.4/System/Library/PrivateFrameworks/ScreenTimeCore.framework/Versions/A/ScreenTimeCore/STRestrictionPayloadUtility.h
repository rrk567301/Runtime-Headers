@interface STRestrictionPayloadUtility : NSObject <STRestrictionPayloadUtilityProtocol>

+ (id)create;

- (void).cxx_destruct;
- (id)init;
- (id)buildUpdatedDeclarationsWithImageGenerationAllowed:(BOOL)a0 originalDeclarations:(id)a1;
- (id)getAppsRatingFromPayloadPlist:(id)a0 error:(id *)a1;

@end
