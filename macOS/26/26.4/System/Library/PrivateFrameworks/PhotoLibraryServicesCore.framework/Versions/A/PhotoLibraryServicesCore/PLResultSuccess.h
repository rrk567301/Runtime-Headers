@interface PLResultSuccess : PLResult {
    id _result;
}

- (BOOL)isSuccess;
- (id)error;
- (id)resultWithError:(id *)a0;
- (BOOL)isFailure;
- (void).cxx_destruct;
- (id)initWithResult:(id)a0;
- (id)description;
- (id)result;

@end
