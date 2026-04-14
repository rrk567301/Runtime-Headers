@class ICNFMCMemoryDataSource;

@interface _ICNFMCMemoryMessage : ICNFMCMessage {
    ICNFMCMemoryDataSource *_dataSource;
}

- (id)dataSource;
- (void)setDataSource:(id)a0;
- (id)initWithStore:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isCompacted;
- (id)primitiveDataSource;
- (id)messageDataIncludingFromSpace:(BOOL)a0 newDocumentID:(id)a1;

@end
