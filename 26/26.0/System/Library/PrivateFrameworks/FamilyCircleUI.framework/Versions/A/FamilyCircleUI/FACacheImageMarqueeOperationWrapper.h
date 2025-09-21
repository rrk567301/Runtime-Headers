@class FACacheImageMarqueeOperation;

@interface FACacheImageMarqueeOperationWrapper : NSObject

@property (retain, nonatomic) FACacheImageMarqueeOperation *cacheImageOperation;

- (id)initWithFamilyCircle:(id)a0;
- (void).cxx_destruct;
- (void)createAndCacheDataWithCompletion:(id /* block */)a0;
- (void)generateMarqueeWith:(unsigned long long)a0;

@end
