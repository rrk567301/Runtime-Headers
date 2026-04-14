@interface AAPersonaUtility : NSObject

+ (BOOL)isDataSeparatedAccount:(id)a0;
+ (BOOL)personaConsistencyCheck:(id)a0;
+ (id)findEnterprisePersonaIdentifier;
+ (void)verifyAndFixPersonaIfNeeded:(id)a0 desiredContext:(id)a1;

@end
