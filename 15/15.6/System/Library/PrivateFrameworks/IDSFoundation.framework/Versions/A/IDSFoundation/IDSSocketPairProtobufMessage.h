@class NSData, NSString, NSDate;

@interface IDSSocketPairProtobufMessage : IDSSocketPairMessage <IDSSocketPairMessageProtocol> {
    unsigned long long _payloadOffset;
    unsigned long long _payloadLength;
}

@property (readonly, nonatomic) unsigned short isResponse;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) NSData *data;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
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
- (id)initWithSequenceNumber:(unsigned int)a0 streamID:(unsigned short)a1 expectsPeerResponse:(char)a2 wantsAppAck:(char)a3 compressed:(char)a4 didWakeHint:(char)a5 peerResponseIdentifier:(id)a6 messageUUID:(id)a7 expiryDate:(id)a8 protobuf:(id)a9;

@end
