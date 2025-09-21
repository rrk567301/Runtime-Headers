@class NSData;

@interface MAUSBHostTransferOUT : MAUSBObject {
    unsigned long long _remSize;
    char _transferError;
    char _transferComplete;
    char _transferAcknowledged;
    int _responseTimer;
    unsigned int _transferReqRetryCounter;
    unsigned int _ackTransferSN;
    int _transferCompletionTimer;
}

@property (readonly) unsigned char requestID;
@property (readonly) unsigned long long length;
@property unsigned long long remSize;
@property char transferError;
@property char transferComplete;
@property char transferAcknowledged;
@property int responseTimer;
@property unsigned int transferReqRetryCounter;
@property unsigned int ackTransferSN;
@property int transferCompletionTimer;
@property (readonly) id /* block */ completionBlock;
@property (readonly) NSData *data;

- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithRequestID:(unsigned char)a0 data:(id)a1 completion:(id /* block */)a2;
- (id)payloadDataForReceiveBufferSize:(unsigned long long)a0;

@end
