@class NSError;

@interface PLResultFailure : PLResult {
    NSError *_error;
}

- (id)resultWithError:(id *)a0;
- (id)result;
- (id)error;
- (id)initWithError:(id)a0;
- (id)description;
- (BOOL)isFailure;
- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
