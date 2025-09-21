@class NSData, ICNFMCMessageHeaders;

@interface ICNFIMAPMessageWithCache : ICNFIMAPMessage {
    NSData *_messageData;
    ICNFMCMessageHeaders *_headers;
}

@property (copy) NSData *messageData;

- (void).cxx_destruct;
- (id)headers;
- (void)setHeaders:(id)a0;
- (id)headersIfAvailable;
- (char)isMessageContentLocallyAvailable;
- (id)bodyDataFetchIfNotAvailable:(char)a0 allowPartial:(char)a1;
- (id)headerDataFetchIfNotAvailable:(char)a0 allowPartial:(char)a1;
- (id)messageDataIncludingFromSpace:(char)a0 newDocumentID:(id)a1;

@end
