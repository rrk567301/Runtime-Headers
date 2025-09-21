@class NSString, NSData, NSDate;

@interface IDSSocketPairAppAckMessage : IDSSocketPairMessage <IDSSocketPairMessageProtocol> {
    unsigned long long _offset;
}

@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) char wantsAppAck;
@property (readonly, nonatomic) char expectsPeerResponse;
@property (readonly, nonatomic) char didWakeHint;
@property (readonly, nonatomic) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;

- (void).cxx_destruct;
- (unsigned char)command;
- (id)initWithCommand:(unsigned char)a0 underlyingData:(id)a1;
- (id)_nonHeaderData;
- (id)initWithSequenceNumber:(unsigned int)a0 streamID:(unsigned short)a1 peerResponseIdentifier:(id)a2;

@end
