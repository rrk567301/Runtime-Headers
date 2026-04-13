@class CRKBook;

@interface CRKParseBookMetadataOperation : CATOperation {
    BOOL mParseImage;
}

@property (readonly, nonatomic) CRKBook *book;

- (void).cxx_destruct;
- (void)main;
- (BOOL)isAsynchronous;
- (void)updateTitle:(id)a0;
- (id)initWithBook:(id)a0 parseImage:(BOOL)a1;
- (void)parseContentsFilePathOperationDidFinish:(id)a0;
- (void)parseBookContentsOperationDidFinish:(id)a0;
- (void)updateAuthor:(id)a0;

@end
