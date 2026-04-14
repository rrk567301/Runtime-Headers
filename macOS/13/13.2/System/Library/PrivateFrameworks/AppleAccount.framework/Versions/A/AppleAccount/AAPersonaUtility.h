@interface AAPersonaUtility : NSObject

+ (id)findEnterprisePersonaIdentifier;
+ (BOOL)personaConsistencyCheck:(id)a0;
+ (void)verifyAndFixPersonaIfNeeded:(id)a0 desiredContext:(id)a1;
+ (BOOL)isDataSeparatedAccount:(id)a0;

@end
