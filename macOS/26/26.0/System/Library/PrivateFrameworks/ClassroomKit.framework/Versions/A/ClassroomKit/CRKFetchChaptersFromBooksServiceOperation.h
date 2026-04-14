@class CRKFetchChaptersRequest;

@interface CRKFetchChaptersFromBooksServiceOperation : CATOperation {
    CRKFetchChaptersRequest *mRequest;
}

- (BOOL)isAsynchronous;
- (void)main;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;

@end
