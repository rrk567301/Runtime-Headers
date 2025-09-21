@class HAPBTLERequest, NSData, NSMutableData, HAPBTLETransactionIdentifier;

@interface HAPBTLEResponse : HMFObject

@property (nonatomic, getter=isHeaderComplete) char headerComplete;
@property (copy, nonatomic) NSData *body;
@property (retain, nonatomic, setter=_setInternalBody:) NSMutableData *_internalBody;
@property (readonly, nonatomic) HAPBTLERequest *request;
@property (readonly, nonatomic) HAPBTLETransactionIdentifier *identifier;
@property (readonly, nonatomic, getter=isEncrypted) char encrypted;
@property (readonly, nonatomic, getter=isBodyComplete) char bodyComplete;
@property (readonly, nonatomic, getter=isComplete) char complete;
@property (readonly, nonatomic, getter=isValid) char valid;
@property (readonly, nonatomic) unsigned long long bodyLength;
@property (readonly, nonatomic) unsigned char statusCode;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)initWithRequest:(id)a0;
- (id)descriptionWithPointer:(char)a0;
- (unsigned long long)_deserializeHeaderBodyLengthWithData:(id)a0 error:(id *)a1;
- (unsigned long long)_deserializeHeaderWithData:(id)a0 error:(id *)a1;
- (unsigned long long)_remainingBodyLength;
- (unsigned long long)appendData:(id)a0 error:(id *)a1;

@end
