@class VSOptional;

@interface VSVerificationDataOperation : VSAsyncOperation

@property (retain) VSOptional *result;

- (void)_finishWithError:(id)a0;
- (void)executionDidBegin;
- (id)init;
- (void).cxx_destruct;
- (void)_finishWithResult:(int)a0 bytes:(char *)a1 length:(unsigned int)a2;
- (void)_finishWithData:(id)a0;

@end
