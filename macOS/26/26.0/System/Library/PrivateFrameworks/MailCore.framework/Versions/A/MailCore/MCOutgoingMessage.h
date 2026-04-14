@class MCMutableMessageHeaders, NSData, NSString;

@interface MCOutgoingMessage : MCMessage {
    unsigned long long _localAttachmentsSize;
}

@property (retain, nonatomic) MCMutableMessageHeaders *mutableHeaders;
@property (retain, nonatomic) NSData *rawData;
@property (retain, nonatomic) NSString *existingRemoteID;
@property (copy) NSString *remoteID;

- (id)dataSource;
- (id)init;
- (unsigned long long)messageSize;
- (void).cxx_destruct;
- (id)bodyDataFetchIfNotAvailable:(BOOL)a0 allowPartial:(BOOL)a1;
- (id)headersFetchIfNotAvailable:(BOOL)a0;
- (id)messageDataFetchIfNotAvailable:(BOOL)a0 newDocumentID:(id)a1;
- (void)setLocalAttachmentsSize:(unsigned long long)a0;

@end
