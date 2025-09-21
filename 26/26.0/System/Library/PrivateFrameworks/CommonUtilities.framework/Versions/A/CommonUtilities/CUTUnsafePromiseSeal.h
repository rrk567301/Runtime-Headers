@class CUTUnsafePromise;

@interface CUTUnsafePromiseSeal : NSObject

@property (retain, nonatomic) CUTUnsafePromise *promise;

- (void)fulfillWithValue:(id)a0;
- (void)failWithError:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
