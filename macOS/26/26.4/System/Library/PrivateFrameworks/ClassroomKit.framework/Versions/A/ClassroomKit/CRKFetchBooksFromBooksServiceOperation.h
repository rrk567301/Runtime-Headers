@class CRKFetchBooksRequest;

@interface CRKFetchBooksFromBooksServiceOperation : CATOperation {
    CRKFetchBooksRequest *mRequest;
}

+ (id)defaultRequest;

- (BOOL)isAsynchronous;
- (id)initWithRequest:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)init;

@end
