@class NSData, NSString, NSDate;

@interface IDSSocketPairFragmentedMessage : IDSSocketPairMessage <IDSSocketPairMessageProtocol> {
    unsigned long long _offset;
    NSData *_data;
}

@property (readonly, nonatomic) unsigned int fragmentedMessageID;
@property (readonly, nonatomic) unsigned int fragmentIndex;
@property (readonly, nonatomic) unsigned int totalFragmentCount;
@property (readonly, nonatomic) NSData *data;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) char wantsAppAck;
@property (readonly, nonatomic) char expectsPeerResponse;
@property (readonly, nonatomic) char didWakeHint;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (readonly, nonatomic) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;

+ (id)createMessageFragmentsFromOriginalMessage:(id)a0 withFragmentedMessageID:(unsigned int)a1 fragmentSize:(unsigned int)a2;
+ (id)createOriginalMessageFromFragmentedMessages:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (unsigned char)command;
- (id)initWithCommand:(unsigned char)a0 underlyingData:(id)a1;
- (id)_nonHeaderData;
- (id)initWithData:(id)a0 withFragmentedMessageID:(unsigned int)a1 fragmentIndex:(unsigned int)a2 totalFragmentCount:(unsigned int)a3;

@end
