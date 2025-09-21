@class HAPBTLEControlOutputStream, HAPCharacteristic, HMFTimer, HAPBTLETransactionIdentifier, HAPService, NSData, HMFBlockOperation;

@interface HAPBTLERequest : HMFObject

@property (readonly, nonatomic) HAPBTLETransactionIdentifier *identifier;
@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) HAPService *service;
@property (readonly, nonatomic) HAPCharacteristic *characteristic;
@property (readonly, nonatomic, getter=isEncrypted) char encrypted;
@property (readonly, nonatomic, getter=isFinished) char finished;
@property (readonly, copy, nonatomic) NSData *body;
@property (readonly, nonatomic) double timeoutInterval;
@property (weak, nonatomic) HMFBlockOperation *operation;
@property (retain, nonatomic) HAPBTLEControlOutputStream *controlOutputStream;
@property (retain, nonatomic) HMFTimer *responseTimer;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (void)cancelWithError:(id)a0;
- (id)serialize;
- (id)descriptionWithPointer:(char)a0;
- (id)_initWithCharacteristic:(id)a0 requestType:(unsigned char)a1 bodyData:(id)a2 shouldEncrypt:(char)a3 timeoutInterval:(double)a4;
- (id)_serializeHeader;
- (id)initWithCharacteristic:(id)a0 requestType:(unsigned char)a1 bodyData:(id)a2 shouldEncrypt:(char)a3 timeoutInterval:(double)a4;
- (id)initWithRequestType:(unsigned char)a0 bodyData:(id)a1 shouldEncrypt:(char)a2 timeoutInterval:(double)a3;

@end
