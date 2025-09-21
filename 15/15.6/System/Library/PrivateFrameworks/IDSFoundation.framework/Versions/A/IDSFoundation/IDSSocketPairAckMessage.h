@class NSData, NSString, NSDate;

@interface IDSSocketPairAckMessage : IDSSocketPairMessage <IDSSocketPairMessageProtocol>

@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) char wantsAppAck;
@property (readonly, nonatomic) char expectsPeerResponse;
@property (readonly, nonatomic) char didWakeHint;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (readonly, nonatomic) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;

- (unsigned char)command;
- (id)initWithCommand:(unsigned char)a0 underlyingData:(id)a1;
- (id)_nonHeaderData;
- (id)initWithSequenceNumber:(unsigned int)a0;

@end
