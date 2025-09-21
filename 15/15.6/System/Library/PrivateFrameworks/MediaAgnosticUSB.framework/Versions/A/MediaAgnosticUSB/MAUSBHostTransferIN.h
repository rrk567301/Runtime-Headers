@class NSData, NSMutableData;

@interface MAUSBHostTransferIN : MAUSBObject {
    NSMutableData *_dataBuffer;
    char _transferError;
    char _transferComplete;
    char _endOfTransferDetected;
    char _transferAcknowledged;
    unsigned int _lastTransferSN;
    long long _transferCompletionTimer;
}

@property (readonly) unsigned char requestID;
@property (readonly) unsigned int length;
@property (readonly) unsigned long long remSize;
@property char transferError;
@property char transferComplete;
@property char endOfTransferDetected;
@property char transferAcknowledged;
@property unsigned int lastTransferSN;
@property long long transferCompletionTimer;
@property (readonly) unsigned int k;
@property (readonly) id /* block */ completionBlock;
@property (readonly) NSData *data;

- (id)description;
- (void).cxx_destruct;
- (void)dataReceived:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithRequestID:(unsigned char)a0 length:(unsigned int)a1 completion:(id /* block */)a2;

@end
