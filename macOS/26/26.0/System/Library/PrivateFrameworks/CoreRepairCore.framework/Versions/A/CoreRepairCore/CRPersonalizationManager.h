@class NSDictionary;

@interface CRPersonalizationManager : NSObject {
    NSDictionary *personalizationMap;
    struct __AMAuthInstall { } *amai;
}

+ (id)defaultManager;
+ (id)SOCKSInfo;
+ (BOOL)IsTatsuErrorNetworkingRelated:(long long)a0;
+ (struct __CFNumber { } *)_copySikaFuse;
+ (struct __AMAuthInstall { } *)createBaseAMAIObject;
+ (int)enableSSO:(struct __AMAuthInstall { } *)a0;
+ (struct __AMAuthInstall { } *)getDefaultAMAuthInstallRef;
+ (id)initWithAuthInstallObj:(struct __AMAuthInstall { } *)a0;
+ (void)setSOCKSInfo:(id)a0;
+ (BOOL)shouldPersonalizeWithSSOByDefault;

- (id)init;
- (void).cxx_destruct;
- (id)_init:(struct __AMAuthInstall { } *)a0;
- (BOOL)AddResponseTicketForSavageUpdaterOptions:(id)a0 auth:(BOOL)a1 error:(id *)a2;
- (BOOL)getSavageTicketForSavageFWUpdateWithOptions:(id)a0 SavageTicket:(id *)a1 error:(id *)a2;
- (BOOL)_personalizeWithElement:(id)a0 useCache:(BOOL)a1 parsedResponseData:(id *)a2 error:(id *)a3;
- (BOOL)addCustomPersonalizationElementWithId:(id)a0 personalizationElement:(id)a1 error:(id *)a2;
- (BOOL)getApTicketForLthTransferWithOptions:(id)a0 apTicketData:(id *)a1 error:(id *)a2;
- (BOOL)getApTicketForSeaCookiePairingWithOptions:(id)a0 pairingTicket:(id *)a1 error:(id *)a2;
- (BOOL)getBMUTicketForVeridianFWUpdateWithOptions:(id)a0 BMUTicket:(id *)a1 error:(id *)a2;
- (BOOL)getPDIAPTicketUsingCache:(BOOL)a0 apTicketData:(id *)a1 error:(id *)a2;
- (BOOL)getRemoteTrustObjectDigestWithExistedDigest:(id)a0 digestData:(id *)a1 error:(id *)a2;
- (BOOL)getRepairTicket:(id *)a0 useRepairAudience:(BOOL)a1 error:(id *)a2;
- (BOOL)getYonkersTicketForYonkersFWUpdateWithOptions:(id)a0 YonkersTicket:(id *)a1 error:(id *)a2;
- (BOOL)personalizeVeridianWithError:(id *)a0 parsedResponseData:(id *)a1;
- (BOOL)personalizeWithElements:(id)a0 error:(id *)a1;

@end
