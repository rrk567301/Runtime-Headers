@class CRKFetchBooksRequest;

@interface CRKFetchBooksFromBooksServiceOperation : CATOperation {
    CRKFetchBooksRequest *mRequest;
}

+ (id)defaultRequest;

- (BOOL)isAsynchronous;
- (void)main;
- (id)initWithRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
