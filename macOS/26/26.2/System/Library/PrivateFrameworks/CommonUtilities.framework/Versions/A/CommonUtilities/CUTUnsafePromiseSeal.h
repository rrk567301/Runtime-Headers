@class CUTUnsafePromise;

@interface CUTUnsafePromiseSeal : NSObject

@property (retain, nonatomic) CUTUnsafePromise *promise;

- (void)fulfillWithValue:(id)a0;
- (void).cxx_destruct;
- (void)failWithError:(id)a0;
- (id)init;

@end
