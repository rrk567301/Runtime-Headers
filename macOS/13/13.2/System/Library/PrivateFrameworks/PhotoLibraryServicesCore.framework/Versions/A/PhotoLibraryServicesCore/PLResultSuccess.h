@interface PLResultSuccess : PLResult {
    id _result;
}

- (id)description;
- (id)error;
- (void).cxx_destruct;
- (id)result;
- (id)resultWithError:(id *)a0;
- (id)initWithResult:(id)a0;
- (BOOL)isSuccess;
- (BOOL)isFailure;

@end
