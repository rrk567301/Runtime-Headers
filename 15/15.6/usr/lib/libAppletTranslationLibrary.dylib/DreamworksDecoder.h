@interface DreamworksDecoder : NSObject <ATLStatefulDecoder, ServiceProviderOpaqueData> {
    unsigned long long decoderState;
    char debug;
}

+ (id)getInstance;

- (id)init;
- (void)cleanup;
- (id)getState:(id)a0;
- (id)DecodeEndE1TLV:(const struct { char *x0; unsigned long long x1; } *)a0 error:(id *)a1;
- (id)GetAppletProperties:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (void)adjustSN:(id)a0;
- (id)getAppletStateAndHistory:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (id)getAppletStateAndHistory:(id)a0 withError:(id *)a1;
- (id)getHistory:(id)a0 state:(id)a1 error:(id *)a2;
- (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withPublicKey:(id)a3 withEncryptionScheme:(id)a4 withTransceiver:(id)a5 withError:(id *)a6;
- (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (id)parseEndEvent:(id)a0 withApplet:(id)a1 withError:(id *)a2;
- (id)parseHCIEvent:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withTransceiver:(id)a4 withError:(id *)a5;
- (id)parseStartEvent:(id)a0 withApplet:(id)a1 withError:(id *)a2;
- (void)parseTransit:(id)a0 fileTrans:(id)a1 into:(id)a2;
- (id)processEndOfTransaction:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (id)resolveTransitModality:(unsigned short)a0;

@end
