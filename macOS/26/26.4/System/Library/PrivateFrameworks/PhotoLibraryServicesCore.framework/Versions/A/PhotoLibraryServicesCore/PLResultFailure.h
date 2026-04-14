@class NSError;

@interface PLResultFailure : PLResult {
    NSError *_error;
}

- (BOOL)isSuccess;
- (id)initWithError:(id)a0;
- (id)error;
- (id)resultWithError:(id *)a0;
- (BOOL)isFailure;
- (void).cxx_destruct;
- (id)description;
- (id)result;

@end
