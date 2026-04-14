@class MCMemoryDataSource;

@interface _MCMemoryMessage : MCMessage {
    MCMemoryDataSource *_dataSource;
}

- (id)dataSource;
- (void)setDataSource:(id)a0;
- (id)initWithStore:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isCompacted;
- (id)messageDataFetchIfNotAvailable:(BOOL)a0 newDocumentID:(id)a1;
- (id)primitiveDataSource;

@end
