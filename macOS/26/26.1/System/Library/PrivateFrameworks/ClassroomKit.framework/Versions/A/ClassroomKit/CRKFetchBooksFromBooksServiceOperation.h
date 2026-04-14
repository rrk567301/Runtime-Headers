@class CRKFetchBooksRequest;

@interface CRKFetchBooksFromBooksServiceOperation : CATOperation {
    CRKFetchBooksRequest *mRequest;
}

+ (id)defaultRequest;

- (id)initWithRequest:(id)a0;
- (void)main;
- (BOOL)isAsynchronous;
- (void).cxx_destruct;
- (id)init;

@end
