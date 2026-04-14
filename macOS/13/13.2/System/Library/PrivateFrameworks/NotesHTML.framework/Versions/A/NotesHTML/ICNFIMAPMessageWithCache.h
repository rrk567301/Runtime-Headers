@class NSData, ICNFMCMessageHeaders;

@interface ICNFIMAPMessageWithCache : ICNFIMAPMessage {
    NSData *_messageData;
    ICNFMCMessageHeaders *_headers;
}

@property (copy) NSData *messageData;

- (void).cxx_destruct;
- (id)headers;
- (void)setHeaders:(id)a0;
- (BOOL)isMessageContentLocallyAvailable;
- (id)headerDataFetchIfNotAvailable:(BOOL)a0 allowPartial:(BOOL)a1;
- (id)bodyDataFetchIfNotAvailable:(BOOL)a0 allowPartial:(BOOL)a1;
- (id)headersIfAvailable;
- (id)messageDataIncludingFromSpace:(BOOL)a0 newDocumentID:(id)a1;

@end
