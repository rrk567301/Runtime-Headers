@interface AppletTranslator : NSObject

+ (void)cleanup;
+ (void)setLibraryHardwareCapabilities:(id)a0;
+ (id)GetAppletProperties:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (char)appletCacheUpdated:(id)a0 serialNumber:(id)a1 isdSequenceCounter:(id)a2 transceiver:(id)a3 error:(id *)a4;
+ (id)checkSEExpressAppletCompatibilityWithPassInformation:(id)a0 error:(id *)a1;
+ (id)checkSEExpressAppletCompatibilityWithPassInformation:(id)a0 useLegacyBehavior:(char)a1 error:(id *)a2;
+ (char)configureSEWithPassInformation:(id)a0 transceiver:(id)a1 limitedToAID:(id)a2 seHasActivatedApplets:(char *)a3 skipAllActivations:(char)a4 useLegacyBehavior:(char)a5 error:(id *)a6;
+ (char)configureSEWithPassInformation:(id)a0 transceiver:(id)a1 limitedToPassUniqueIdentifiers:(id)a2 seHasActivatedApplets:(char *)a3 skipAllActivations:(char)a4 useLegacyBehavior:(char)a5 error:(id *)a6;
+ (id)getAppletStateAndHistory:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (BOOL)getCurrentInMetroStatus:(id *)a0;
+ (id)getNFCSettings;
+ (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withPublicKey:(id)a3 withEncryptionScheme:(id)a4 withTransceiver:(id)a5 withError:(id *)a6;
+ (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (void)initLibrary:(id /* block */)a0;
+ (void)initLibraryWithDelegate:(id)a0;
+ (char)isLegacyApplet:(id)a0 withPackage:(id)a1 withModule:(id)a2;
+ (id)parseHCIEvent:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withTransceiver:(id)a4 withError:(id *)a5;
+ (id)processEndOfTransaction:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (char)setPlasticCardMode:(char)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 serialNumber:(id)a4 transceiver:(id)a5 error:(id *)a6;

@end
