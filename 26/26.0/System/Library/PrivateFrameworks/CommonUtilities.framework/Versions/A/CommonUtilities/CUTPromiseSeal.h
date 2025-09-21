@class CUTPromise;

@interface CUTPromiseSeal : NSObject

@property (retain, nonatomic) CUTPromise *promise;

- (void)fulfillWithValue:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)failWithError:(id)a0;
- (void).cxx_destruct;

@end
