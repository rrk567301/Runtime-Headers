@class NSMutableData, ICNFMCOutgoingMessage;

@interface _ICNFMCOutgoingMessageBody : ICNFMCMessageBody

@property (retain, nonatomic) NSMutableData *rawData;
@property (weak) ICNFMCOutgoingMessage *message;

- (void).cxx_destruct;
- (id)init;

@end
