@class MCMemoryDataSource;

@interface _MCMemoryMessage : MCMessage {
    MCMemoryDataSource *_dataSource;
}

- (void)setDataSource:(id)a0;
- (id)dataSource;
- (id)initWithStore:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isCompacted;
- (id)messageDataFetchIfNotAvailable:(BOOL)a0 newDocumentID:(id)a1;
- (id)primitiveDataSource;

@end
