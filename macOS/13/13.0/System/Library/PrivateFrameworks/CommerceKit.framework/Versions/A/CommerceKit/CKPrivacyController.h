@interface CKPrivacyController : NSObject

+ (void)acknowledgePrivacyLinkForIdentifier:(id)a0 storeClient:(id)a1;
+ (BOOL)shouldDisplayPrivacyLinkForIdentifier:(id)a0 storeClient:(id)a1;
+ (BOOL)_shouldDisableGDPR;
+ (BOOL)_mergeLocalPrivacyConsentWithAccount:(id)a0;
+ (void)_acknowledgePrivacyConsentForIdentifiers:(id)a0 account:(id)a1;

@end
