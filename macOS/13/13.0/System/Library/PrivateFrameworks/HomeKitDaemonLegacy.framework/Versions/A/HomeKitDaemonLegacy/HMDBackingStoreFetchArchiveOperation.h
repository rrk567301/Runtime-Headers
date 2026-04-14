@class NSString;

@interface HMDBackingStoreFetchArchiveOperation : HMDBackingStoreOperation

@property (copy, nonatomic) id /* block */ fetchResult;
@property (copy) NSString *identifier;

- (void).cxx_destruct;
- (id)mainReturningError;
- (id)initWithFetchResult:(id /* block */)a0;

@end
