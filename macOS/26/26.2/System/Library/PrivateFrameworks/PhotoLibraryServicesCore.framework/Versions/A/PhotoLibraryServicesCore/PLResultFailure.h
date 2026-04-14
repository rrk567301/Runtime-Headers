@class NSError;

@interface PLResultFailure : PLResult {
    NSError *_error;
}

- (id)resultWithError:(id *)a0;
- (id)error;
- (BOOL)isFailure;
- (id)initWithError:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isSuccess;
- (id)result;

@end
