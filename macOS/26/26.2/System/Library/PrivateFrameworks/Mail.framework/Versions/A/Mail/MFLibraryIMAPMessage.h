@class MFIMAPAccount, MCMessageHeaders;

@interface MFLibraryIMAPMessage : MFLibraryMessage {
    MCMessageHeaders *_headers;
}

@property (readonly, nonatomic) MFIMAPAccount *account;

- (void)setDataSource:(id)a0;
- (void)setHeaders:(id)a0;
- (id)dataSource;
- (void).cxx_destruct;
- (id)headersFetchIfNotAvailable:(BOOL)a0;

@end
