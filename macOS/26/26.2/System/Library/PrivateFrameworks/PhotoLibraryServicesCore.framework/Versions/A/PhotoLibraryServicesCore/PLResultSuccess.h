@interface PLResultSuccess : PLResult {
    id _result;
}

- (id)initWithResult:(id)a0;
- (id)resultWithError:(id *)a0;
- (id)error;
- (BOOL)isFailure;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isSuccess;
- (id)result;

@end
