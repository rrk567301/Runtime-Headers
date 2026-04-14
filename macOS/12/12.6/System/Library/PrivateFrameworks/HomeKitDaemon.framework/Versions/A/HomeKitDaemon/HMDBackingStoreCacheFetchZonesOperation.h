@interface HMDBackingStoreCacheFetchZonesOperation : HMDBackingStoreOperation

@property (copy, nonatomic) id /* block */ fetchResult;

- (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithFetchResult:(id /* block */)a0;

@end
