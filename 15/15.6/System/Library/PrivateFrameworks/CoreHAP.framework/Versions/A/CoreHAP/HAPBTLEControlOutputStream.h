@class NSOperationQueue, HAPBTLETransactionIdentifier, NSObject, NSData;
@protocol OS_dispatch_queue, HAPBTLEControlOutputStreamDelegate;

@interface HAPBTLEControlOutputStream : HMFObject

@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic, getter=isComplete) char complete;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, getter=isOpen) char open;
@property (nonatomic) unsigned long long controlPayloadWrittenLength;
@property (readonly, nonatomic) NSOperationQueue *operationQueue;
@property (weak) id<HAPBTLEControlOutputStreamDelegate> delegate;
@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) HAPBTLETransactionIdentifier *transactionIdentifier;
@property (readonly, copy, nonatomic) NSData *payload;
@property (readonly, nonatomic) unsigned long long mtuLength;
@property (readonly, nonatomic) double timeoutInterval;

+ (id)shortDescription;

- (id)debugDescription;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)close;
- (void)open;
- (id)shortDescription;
- (void)_complete;
- (void)_closeWithError:(id)a0;
- (id)descriptionWithPointer:(char)a0;
- (id)_nextPacketWithMaximumLength:(unsigned long long)a0 error:(id *)a1;
- (void)_sendNextPayloadFragmentWithCompletionHandler:(id /* block */)a0;
- (id)initWithControlType:(unsigned char)a0 transactionIdentifier:(id)a1 controlPayload:(id)a2 mtuLength:(unsigned long long)a3 timeoutInterval:(double)a4;
- (unsigned long long)remainingControlPayloadLength;
- (void)sendNextPayloadFragment;

@end
