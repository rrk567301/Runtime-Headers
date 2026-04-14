@class ICNFMCMemoryDataSource;

@interface _ICNFMCMemoryMessage : ICNFMCMessage {
    ICNFMCMemoryDataSource *_dataSource;
}

- (id)initWithStore:(id)a0;
- (void)setDataSource:(id)a0;
- (id)dataSource;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isCompacted;
- (id)primitiveDataSource;
- (id)messageDataIncludingFromSpace:(BOOL)a0 newDocumentID:(id)a1;

@end
