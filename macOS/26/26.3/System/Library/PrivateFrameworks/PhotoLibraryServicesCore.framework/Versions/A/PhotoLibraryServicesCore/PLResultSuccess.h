@interface PLResultSuccess : PLResult {
    id _result;
}

- (BOOL)isFailure;
- (BOOL)isSuccess;
- (id)resultWithError:(id *)a0;
- (id)initWithResult:(id)a0;
- (id)error;
- (id)description;
- (id)result;
- (void).cxx_destruct;

@end
