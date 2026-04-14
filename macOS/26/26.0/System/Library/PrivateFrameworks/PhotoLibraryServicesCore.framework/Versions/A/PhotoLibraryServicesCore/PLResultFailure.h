@class NSError;

@interface PLResultFailure : PLResult {
    NSError *_error;
}

- (BOOL)isFailure;
- (BOOL)isSuccess;
- (id)initWithError:(id)a0;
- (id)result;
- (id)resultWithError:(id *)a0;
- (id)description;
- (id)error;
- (void).cxx_destruct;

@end
