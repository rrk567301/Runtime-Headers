@class NSData;

@interface IDSSocketPairEncryptedMessage : IDSSocketPairMessage {
    NSData *_data;
}

@property (readonly, nonatomic) NSData *data;

- (id)initWithData:(id)a0;
- (unsigned char)command;
- (void).cxx_destruct;
- (id)initWithCommand:(unsigned char)a0 underlyingData:(id)a1;
- (id)_nonHeaderData;

@end
