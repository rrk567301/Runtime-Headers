@class NSError;

@interface PLResultFailure : PLResult {
    NSError *_error;
}

- (BOOL)isFailure;
- (id)initWithError:(id)a0;
- (BOOL)isSuccess;
- (id)resultWithError:(id *)a0;
- (id)error;
- (id)description;
- (id)result;
- (void).cxx_destruct;

@end
