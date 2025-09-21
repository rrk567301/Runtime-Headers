@class NSData, NSString, NSDate;

@interface IDSSocketPairDataMessage : IDSSocketPairMessage <IDSSocketPairMessageProtocol> {
    unsigned long long _payloadOffset;
    unsigned long long _payloadLength;
    NSData *_data;
}

@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) char expectsPeerResponse;
@property (readonly, nonatomic) char wantsAppAck;
@property (nonatomic) char compressed;
@property (nonatomic) char didWakeHint;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (readonly, nonatomic) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;

- (void).cxx_destruct;
- (unsigned char)command;
- (id)initWithCommand:(unsigned char)a0 underlyingData:(id)a1;
- (id)_nonHeaderData;
- (id)initWithSequenceNumber:(unsigned int)a0 streamID:(unsigned short)a1 expectsPeerResponse:(char)a2 wantsAppAck:(char)a3 compressed:(char)a4 didWakeHint:(char)a5 peerResponseIdentifier:(id)a6 messageUUID:(id)a7 data:(id)a8 expiryDate:(id)a9;

@end
