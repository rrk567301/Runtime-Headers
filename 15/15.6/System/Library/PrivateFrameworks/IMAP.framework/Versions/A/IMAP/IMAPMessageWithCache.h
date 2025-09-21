@class NSData, EDMessageCategorizationResult, MCMessageHeaders;

@interface IMAPMessageWithCache : IMAPMessage {
    NSData *_messageData;
    MCMessageHeaders *_headers;
    EDMessageCategorizationResult *_categorizationResult;
    long long _authenticationState;
}

@property (copy) NSData *messageData;

- (void).cxx_destruct;
- (void)setHeaders:(id)a0;
- (long long)authenticationState;
- (void)setAuthenticationState:(long long)a0;
- (id)categorizationResult;
- (char)isMessageContentLocallyAvailable;
- (void)setCategorizationResult:(id)a0;
- (id)bodyDataFetchIfNotAvailable:(char)a0 allowPartial:(char)a1;
- (id)headerDataFetchIfNotAvailable:(char)a0 allowPartial:(char)a1;
- (id)headersFetchIfNotAvailable:(char)a0;
- (id)messageDataFetchIfNotAvailable:(char)a0 newDocumentID:(id)a1;

@end
