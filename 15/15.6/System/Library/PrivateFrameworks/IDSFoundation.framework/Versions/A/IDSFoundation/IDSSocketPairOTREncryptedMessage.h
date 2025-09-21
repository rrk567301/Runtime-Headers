@class NSData, NSString, NSDate;

@interface IDSSocketPairOTREncryptedMessage : IDSSocketPairMessage <IDSSocketPairMessageProtocol> {
    unsigned long long _offset;
    NSData *_data;
}

@property (readonly, nonatomic) unsigned char versionNumber;
@property (readonly, nonatomic) char encrypted;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) unsigned short priority;
@property (nonatomic) unsigned int sequenceNumber;
@property (readonly, nonatomic) char fileXfer;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) char wantsAppAck;
@property (readonly, nonatomic) char expectsPeerResponse;
@property (readonly, nonatomic) char didWakeHint;
@property (readonly, nonatomic) NSString *peerResponseIdentifier;
@property (readonly, nonatomic) NSString *messageUUID;
@property (retain, nonatomic) NSDate *expiryDate;

- (id)description;
- (void).cxx_destruct;
- (unsigned char)command;
- (id)initWithCommand:(unsigned char)a0 underlyingData:(id)a1;
- (id)_nonHeaderData;
- (id)initWithVersion:(unsigned char)a0 encrypted:(char)a1 streamID:(unsigned short)a2 priority:(unsigned short)a3 sequenceNumber:(unsigned int)a4 fileXfer:(char)a5 data:(id)a6;

@end
