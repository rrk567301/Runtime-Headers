@class NSArray, NSString;

@interface HAP2EncodedCharacteristicRequestThread : HAP2LoggingObject <HAP2EncodedCharacteristicRequest> {
    char _enforcePDUBodyLength;
    NSArray *_internalCharacteristics;
    unsigned long long _requestType;
}

@property (readonly, nonatomic) NSArray *btleRequests;
@property (readonly, nonatomic) NSArray *characteristics;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic, getter=isEncrypted) char encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)serialize;
- (id)initWithBTLERequests:(id)a0 requestType:(unsigned long long)a1 enforcePDUBodyLength:(char)a2;

@end
