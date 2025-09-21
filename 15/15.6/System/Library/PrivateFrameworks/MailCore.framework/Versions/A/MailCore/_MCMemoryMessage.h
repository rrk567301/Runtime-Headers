@class MCMemoryDataSource;

@interface _MCMemoryMessage : MCMessage {
    MCMemoryDataSource *_dataSource;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (id)dataSource;
- (void)setDataSource:(id)a0;
- (char)isCompacted;
- (id)messageDataFetchIfNotAvailable:(char)a0 newDocumentID:(id)a1;
- (id)primitiveDataSource;

@end
