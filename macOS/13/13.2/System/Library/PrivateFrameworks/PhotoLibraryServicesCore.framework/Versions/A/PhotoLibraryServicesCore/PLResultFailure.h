@class NSError;

@interface PLResultFailure : PLResult {
    NSError *_error;
}

- (id)description;
- (id)error;
- (void).cxx_destruct;
- (id)result;
- (id)initWithError:(id)a0;
- (id)resultWithError:(id *)a0;
- (BOOL)isSuccess;
- (BOOL)isFailure;

@end
