@interface MAUSBDataHeader : MAUSBHeader

@property (readonly) unsigned char endpointStatus;
@property (readonly) char acknowledgementRequest;
@property (readonly) char negativeCredit;
@property (readonly) char endOfTransfer;
@property (readonly) unsigned char transferType;
@property (readonly) unsigned short streamID;
@property unsigned int sequenceNumber;
@property (readonly) unsigned char requestID;
@property unsigned int remainingSizeCredit;

- (id)data;
- (id)initWithBuffer:(id)a0;
- (unsigned short)structureLength;
- (id)descriptionWithTabDepth:(unsigned int)a0;
- (id)initWithHost:(char)a0 retry:(char)a1 packetSubtype:(unsigned char)a2 length:(unsigned short)a3 handle:(id)a4 deviceAddress:(unsigned char)a5 ssid:(unsigned char)a6 statusCode:(unsigned char)a7 endpointStatus:(unsigned char)a8 acknowledgementRequest:(char)a9 negativeCredit:(char)a10 endOfTransfer:(char)a11 transferType:(unsigned char)a12 streamID:(unsigned short)a13 sequenceNumber:(unsigned int)a14 requestID:(unsigned char)a15 remainingSizeCredit:(unsigned int)a16;

@end
