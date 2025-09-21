@class NSString, NSDictionary, NSData, ATLTimer, NSMutableArray, NSNumber;

@interface CalypsoDecoder : NSObject <ATLStatefulDecoder, ServiceProviderOpaqueData> {
    NSMutableArray *_hciArray;
    NSString *_appletAID;
    BOOL _errorTransaction;
    NSNumber *_errorCode;
    NSData *_transactionDetailRaw;
    NSDictionary *_staticConfig;
    NSNumber *_cityCode;
    NSNumber *_serviceProvider;
    id _currentSubDecoder;
    ATLTimer *_timer;
    BOOL _debug;
}

+ (id)sharedInstance;
+ (id)DecodeTransactionE1TLV:(const struct { char *x0; unsigned long long x1; } *)a0 error:(id *)a1;
+ (id)amountDictionaryWithAmount:(id)a0 withIdentifier:(id)a1 usingAmountKey:(id)a2 usingCurrencyKey:(id)a3 usingExponentKey:(id)a4 usingIdentifierKey:(id)a5;
+ (id)getCardConfig:(unsigned long long)a0;
+ (BOOL)getDontWaitForEOT:(unsigned char)a0;
+ (id)getSubDecoder:(unsigned char)a0;

- (void)cleanup;
- (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (id)init;
- (id)GetAppletProperties:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (id)parseHCIEvent:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withTransceiver:(id)a4 withError:(id *)a5;
- (void)setErrorCode:(unsigned short)a0;
- (id)getServiceProviderData:(id)a0 withPackage:(id)a1 withModule:(id)a2 withPublicKey:(id)a3 withEncryptionScheme:(id)a4 withTransceiver:(id)a5 withError:(id *)a6;
- (void).cxx_destruct;
- (id)getStaticConfig;
- (id)parseEndEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
- (id)generateContactEndEvent:(id)a0 withDidError:(BOOL)a1;
- (id)generateEndEventFromHCI;
- (id)getATLTimer;
- (id)getAppletAID;
- (id)getAppletStateAndHistory:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (id)getEmReentryDelayMs:(unsigned char)a0;
- (id)getErrorCode;
- (BOOL)getErrorTransaction;
- (id)getHciArray;
- (id)getServiceProvider:(unsigned char)a0;
- (id)getSubDecoderConfig:(id)a0 withPackage:(id)a1 withModule:(id)a2 withTransceiver:(id)a3 withError:(id *)a4;
- (id)getTransactionDetailRaw;
- (id)parseCommandEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
- (id)parseDeselectEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
- (id)parseStartEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
- (id)parseTransactionEvent:(id)a0 withApplet:(id)a1 error:(id *)a2;
- (id)processEndOfTransaction:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3 withError:(id *)a4;
- (void)setErrorTransaction:(BOOL)a0;
- (void)setTransactionDetailRaw:(id)a0;
- (BOOL)supportsPlasticCardMode:(id)a0 withApplet:(id)a1 withPackage:(id)a2 withModule:(id)a3;

@end
