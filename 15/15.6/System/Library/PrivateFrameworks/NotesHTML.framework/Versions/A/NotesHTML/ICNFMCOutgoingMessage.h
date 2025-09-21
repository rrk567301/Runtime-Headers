@class NSString, _ICNFMCOutgoingMessageBody, NSData, ICNFMCMutableMessageHeaders;

@interface ICNFMCOutgoingMessage : ICNFMCMessage {
    _ICNFMCOutgoingMessageBody *_messageBody;
    unsigned long long _localAttachmentsSize;
}

@property (retain, nonatomic) ICNFMCMutableMessageHeaders *mutableHeaders;
@property (copy, nonatomic) NSString *remoteID;
@property (retain, nonatomic) NSData *rawData;
@property (retain, nonatomic) _ICNFMCOutgoingMessageBody *messageBody;
@property (retain, nonatomic) NSString *existingRemoteID;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)dataSource;
- (unsigned long long)messageSize;
- (id)headers;
- (id)bodyData;
- (id)headersIfAvailable;
- (id)bodyDataFetchIfNotAvailable:(char)a0 allowPartial:(char)a1;
- (void)setLocalAttachmentsSize:(unsigned long long)a0;
- (id)messageBodyIfAvailable;
- (id)messageDataIncludingFromSpace:(char)a0;
- (id)messageDataIncludingFromSpace:(char)a0 newDocumentID:(id)a1;

@end
