@class NSData, MCMessageHeaders;

@interface IMAPMessageWithCache : IMAPMessage {
    NSData *_messageData;
    MCMessageHeaders *_headers;
}

@property (copy) NSData *messageData;

- (void).cxx_destruct;
- (void)setHeaders:(id)a0;
- (id)bodyDataFetchIfNotAvailable:(BOOL)a0 allowPartial:(BOOL)a1;
- (id)headerDataFetchIfNotAvailable:(BOOL)a0 allowPartial:(BOOL)a1;
- (id)headersFetchIfNotAvailable:(BOOL)a0;
- (BOOL)isMessageContentLocallyAvailable;
- (id)messageDataFetchIfNotAvailable:(BOOL)a0 newDocumentID:(id)a1;

@end
