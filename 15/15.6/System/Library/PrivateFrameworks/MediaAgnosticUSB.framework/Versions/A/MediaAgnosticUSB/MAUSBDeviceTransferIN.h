@class NSMutableData;

@interface MAUSBDeviceTransferIN : MAUSBObject {
    unsigned int _remSize;
    char _transferError;
    char _transferComplete;
    char _endOfTransferDetected;
    unsigned int _lastTransferSN;
    NSMutableData *_data;
}

@property (readonly) unsigned char requestID;
@property (readonly) unsigned int length;
@property unsigned int remSize;
@property char transferError;
@property char transferComplete;
@property char endOfTransferDetected;
@property unsigned int lastTransferSN;
@property (readonly) unsigned int remainingDataLength;

- (id)description;
- (void).cxx_destruct;
- (void)appendData:(id)a0;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)getDataForRemainingSize:(unsigned int)a0;
- (id)getNextTransferPayload;
- (id)initWithRequestID:(unsigned char)a0 length:(unsigned int)a1;

@end
