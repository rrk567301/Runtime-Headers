@interface PLResultSuccess : PLResult {
    id _result;
}

- (BOOL)isFailure;
- (id)initWithResult:(id)a0;
- (BOOL)isSuccess;
- (id)result;
- (id)resultWithError:(id *)a0;
- (id)description;
- (id)error;
- (void).cxx_destruct;

@end
