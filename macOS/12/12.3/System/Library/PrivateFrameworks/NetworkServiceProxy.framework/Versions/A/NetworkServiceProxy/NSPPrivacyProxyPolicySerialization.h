@interface NSPPrivacyProxyPolicySerialization : NSObject

+ (id)policiesWithProtoBuf:(id)a0 flowDivertHandle:(id)a1 ingressProxyURL:(id)a2 ingressFallbackProxyURL:(id)a3 captivePluginBundleIDs:(id)a4;
+ (id)preferredProxyPoliciesForAgent:(id)a0 domainFilter:(unsigned long long)a1;
+ (id)policyExceptionsForWiFi:(BOOL)a0 cellular:(BOOL)a1 interfaceNames:(id)a2;
+ (id)policiesForSafariTechnologyPreview:(id)a0;
+ (id)policiesForSafariAppBundles:(id)a0 safariBundleMachOUUIDs:(id)a1;
+ (id)policiesForMailApp:(id)a0;
+ (id)probePolicies;
+ (id)machoUUIDFromSigningID:(id)a0;
+ (id)createPolicyWithOrder:(unsigned int)a0 policyResult:(id)a1 machOUUID:(id)a2 remotePort:(unsigned short)a3 protocol:(unsigned short)a4 otherPolicyConditions:(id)a5 uidRequired:(BOOL)a6;
+ (void)addDNSPolicyWithOrder:(unsigned int)a0 toArray:(id)a1 machOUUID:(id)a2;
+ (id)createDNSPolicies:(id)a0 ingressProxyURL:(id)a1 ingressFallbackProxyURL:(id)a2;
+ (id)createTrackerPolicies:(id)a0 webContent:(BOOL)a1 machOUUIDs:(id)a2;
+ (id)createUnencryptedPolicies:(id)a0 machOUUIDs:(id)a1;
+ (id)createAllPolicies:(id)a0 machOUUIDs:(id)a1 exceptionAccount:(id)a2;
+ (id)createHTTPPolicies:(id)a0 skipUnencrypted:(BOOL)a1 machOUUIDs:(id)a2;
+ (id)createAccountIDBasedPolicies:(id)a0 accountIdentifier:(id)a1 platformBinary:(BOOL)a2 uidRequired:(BOOL)a3;
+ (id)createRemovalPoliciesForCaptivePlugins:(id)a0;
+ (id)createRemovalPoliciesForSystemComponents;
+ (int)policyMaskFromProxyPolicy:(id)a0;
+ (id)createPoliciesFromPolicyMask:(int)a0 flowDivertHandle:(id)a1 ingressProxyURL:(id)a2 ingressFallbackProxyURL:(id)a3 captivePluginBundleIDs:(id)a4;
+ (id)safariBundleMachOUUIDsToInstall:(id)a0;
+ (id)protoBufWithPropertyList:(id)a0;
+ (id)propertyListWithProtoBuf:(id)a0;

@end
