@class ICNFMCMemoryDataSource;

@interface _ICNFMCMemoryMessage : ICNFMCMessage {
    ICNFMCMemoryDataSource *_dataSource;
}

- (id)initWithStore:(id)a0;
- (id)dataSource;
- (id)init;
- (void)setDataSource:(id)a0;
- (void).cxx_destruct;
- (BOOL)isCompacted;
- (id)primitiveDataSource;
- (id)messageDataIncludingFromSpace:(BOOL)a0 newDocumentID:(id)a1;

@end
