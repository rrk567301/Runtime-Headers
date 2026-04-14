@class MCMemoryDataSource;

@interface _MCMemoryMessage : MCMessage {
    MCMemoryDataSource *_dataSource;
}

- (id)initWithStore:(id)a0;
- (void)setDataSource:(id)a0;
- (id)dataSource;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isCompacted;
- (id)messageDataFetchIfNotAvailable:(BOOL)a0 newDocumentID:(id)a1;
- (id)primitiveDataSource;

@end
