@interface CKPrivacyController : NSObject

+ (void)_acknowledgePrivacyConsentForIdentifiers:(id)a0 account:(id)a1;
+ (char)_mergeLocalPrivacyConsentWithAccount:(id)a0;
+ (char)_shouldDisableGDPR;
+ (void)acknowledgePrivacyLinkForIdentifier:(id)a0 storeClient:(id)a1;
+ (char)shouldDisplayPrivacyLinkForIdentifier:(id)a0 storeClient:(id)a1;

@end
