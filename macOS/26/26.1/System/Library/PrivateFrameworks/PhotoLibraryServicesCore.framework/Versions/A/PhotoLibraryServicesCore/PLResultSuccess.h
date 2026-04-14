@interface PLResultSuccess : PLResult {
    id _result;
}

- (id)resultWithError:(id *)a0;
- (id)result;
- (id)initWithResult:(id)a0;
- (id)error;
- (id)description;
- (BOOL)isFailure;
- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
