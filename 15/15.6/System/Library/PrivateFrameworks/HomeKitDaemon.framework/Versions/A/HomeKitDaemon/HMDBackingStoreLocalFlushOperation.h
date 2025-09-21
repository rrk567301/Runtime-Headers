@class HMDBackingStoreLocal;

@interface HMDBackingStoreLocalFlushOperation : NSOperation

@property (retain, nonatomic) HMDBackingStoreLocal *store;
@property (copy, nonatomic) id /* block */ resultHandler;
@property (nonatomic) char clearCloud;

- (void).cxx_destruct;
- (void)main;
- (id)initWithStore:(id)a0 clearCloud:(char)a1 resultHandler:(id /* block */)a2;

@end
