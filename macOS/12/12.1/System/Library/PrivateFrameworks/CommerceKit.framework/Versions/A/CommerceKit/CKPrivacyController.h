@interface CKPrivacyController : NSObject

+ (BOOL)shouldDisplayPrivacyLinkForIdentifier:(id)a0 storeClient:(id)a1;
+ (BOOL)_shouldDisableGDPR;
+ (void)acknowledgePrivacyLinkForIdentifier:(id)a0 storeClient:(id)a1;
+ (BOOL)_mergeLocalPrivacyConsentWithAccount:(id)a0;
+ (void)_acknowledgePrivacyConsentForIdentifiers:(id)a0 account:(id)a1;

@end
