@class NSData, NSString, NSDate;

@interface IDSSocketPairOTRMessage : IDSSocketPairMessage <IDSSocketPairMessageProtocol> {
    unsigned long long _offset;
    NSData *_data;
}

@property (readonly, nonatomic) unsigned char versionNumber;
@property (readonly, nonatomic) char encrypted;
@property (readonly, nonatomic) char shouldEncrypt;
@property (readonly, nonatomic) unsigned char protectionClass;
@property (nonatomic) unsigned short streamID;
@property (readonly, nonatomic) unsigned short priority;
@property (nonatomic) unsigned int sequenceNumber;
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
- (id)initWithVersion:(unsigned char)a0 encrypted:(char)a1 shouldEncrypt:(char)a2 protectionClass:(unsigned char)a3 streamID:(unsigned short)a4 priority:(unsigned short)a5 sequenceNumber:(unsigned int)a6 data:(id)a7;

@end
