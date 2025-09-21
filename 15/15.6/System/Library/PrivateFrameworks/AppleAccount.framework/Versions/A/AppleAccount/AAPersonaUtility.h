@interface AAPersonaUtility : NSObject

+ (id)findEnterprisePersonaIdentifier;
+ (char)isDataSeparatedAccount:(id)a0;
+ (char)personaConsistencyCheck:(id)a0;
+ (void)verifyAndFixPersonaIfNeeded:(id)a0 desiredContext:(id)a1;

@end
