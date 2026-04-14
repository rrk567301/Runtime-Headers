@class FACacheImageMarqueeOperation;

@interface FACacheImageMarqueeOperationWrapper : NSObject

@property (retain, nonatomic) FACacheImageMarqueeOperation *cacheImageOperation;

- (id)initWithFamilyCircle:(id)a0;
- (void).cxx_destruct;
- (void)createAndCacheDataWithCompletion:(id /* block */)a0;
- (void)generateMarqueeWithCachePolicy:(unsigned long long)a0 completionHandler:(id /* block */)a1;

@end
