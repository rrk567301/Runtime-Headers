@class CRKFetchBooksRequest;

@interface CRKFetchBooksFromBooksServiceOperation : CATOperation {
    CRKFetchBooksRequest *mRequest;
}

+ (id)defaultRequest;

- (id)initWithRequest:(id)a0;
- (BOOL)isAsynchronous;
- (id)init;
- (void)main;
- (void).cxx_destruct;

@end
