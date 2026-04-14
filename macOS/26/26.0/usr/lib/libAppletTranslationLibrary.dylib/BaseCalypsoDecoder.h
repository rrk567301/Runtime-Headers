@interface BaseCalypsoDecoder : NSObject <CalypsoSubDecoder>

+ (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
+ (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withPublicKey:(id)a3 withEncryptionScheme:(id)a4 withTransceiver:(id)a5 withError:(id *)a6;
+ (id)formatCommutePlanIdentifier:(id)a0 withTariffCode:(id)a1 withZoneList:(id)a2;
+ (id)getAppletStateAndHistory:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
+ (id)getAppletStateAndHistory:(id)a0 withError:(id *)a1;
+ (id)getServiceProviderData:(id)a0 withError:(id *)a1;
+ (id)getServiceProviderData:(id)a0 withPublicKey:(id)a1 withEncryptionScheme:(id)a2 withError:(id *)a3;
+ (void)interpretTransactionEvent:(id)a0;

- (id)generateEndEventFromHCI;

@end
