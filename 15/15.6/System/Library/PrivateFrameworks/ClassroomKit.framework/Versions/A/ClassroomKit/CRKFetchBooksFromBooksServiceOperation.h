@class CRKFetchBooksRequest;

@interface CRKFetchBooksFromBooksServiceOperation : CATOperation {
    CRKFetchBooksRequest *mRequest;
}

+ (id)defaultRequest;

- (id)init;
- (void).cxx_destruct;
- (char)isAsynchronous;
- (void)main;
- (id)initWithRequest:(id)a0;

@end
