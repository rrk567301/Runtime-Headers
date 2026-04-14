@class NSString, ACAccountStore;

@interface NDORequestProperties : NSObject <NDORequestPropertiesProvider>

@property (retain) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makePropertiesProvider;

- (id)init;
- (void).cxx_destruct;
- (id)_osVersion;
- (id)initWithAccountStore:(id)a0;
- (id)OASHeadersWithOfferID:(id)a0 serialNumber:(id)a1 primarySerialNumber:(id)a2 currentStoreLocaleHeader:(id)a3;
- (id)_GSHeadersForAccount:(id)a0 forceReprovisioning:(BOOL)a1 avoidUI:(BOOL)a2;
- (id)_accountHeadersFor:(id)a0 forceReprovisioning:(BOOL)a1 avoidUI:(BOOL)a2;
- (id)_appleIDSesssion;
- (id)_baaManager;
- (id)_deviceProductType;
- (id)_storeLocale;
- (id)_userAgentWithBundleID:(id)a0;
- (id)accountHeadersFor:(id)a0 forceReprovisioning:(BOOL)a1 avoidUI:(BOOL)a2;
- (id)basicHeadersWithBundleID:(id)a0;
- (id)coverageRequestBodyWithSerialNumber:(id)a0 primarySerialNumber:(id)a1 displayedEvents:(id)a2;
- (id)deviceListRequestBodyWithSerialNumber:(id)a0 localDevices:(id)a1;
- (id)signatureHeadersForBody:(id)a0;

@end
