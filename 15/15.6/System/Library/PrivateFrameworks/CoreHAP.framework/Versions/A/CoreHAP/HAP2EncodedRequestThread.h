@class NSString, HAP2AccessoryServerEncodingThreadBTLERequest;

@interface HAP2EncodedRequestThread : HAP2LoggingObject <HAP2EncodedRequest> {
    char _enforcePDUBodyLength;
}

@property (readonly, nonatomic) HAP2AccessoryServerEncodingThreadBTLERequest *btleRequest;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic, getter=isEncrypted) char encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned char)btleRequestTypeFromHAP2RequestType:(unsigned long long)a0;
+ (unsigned long long)hap2RequestTypeFromBTLERequestType:(unsigned char)a0;

- (void).cxx_destruct;
- (id)serialize;
- (id)initWithBTLERequest:(id)a0 enforcePDUBodyLength:(char)a1;

@end
