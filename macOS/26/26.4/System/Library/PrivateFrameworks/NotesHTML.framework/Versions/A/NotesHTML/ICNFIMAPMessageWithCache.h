@class NSData, ICNFMCMessageHeaders;

@interface ICNFIMAPMessageWithCache : ICNFIMAPMessage {
    NSData *_messageData;
    ICNFMCMessageHeaders *_headers;
}

@property (copy) NSData *messageData;

- (id)headers;
- (void).cxx_destruct;
- (void)setHeaders:(id)a0;
- (id)headersIfAvailable;
- (BOOL)isMessageContentLocallyAvailable;
- (id)bodyDataFetchIfNotAvailable:(BOOL)a0 allowPartial:(BOOL)a1;
- (id)headerDataFetchIfNotAvailable:(BOOL)a0 allowPartial:(BOOL)a1;
- (id)messageDataIncludingFromSpace:(BOOL)a0 newDocumentID:(id)a1;

@end
