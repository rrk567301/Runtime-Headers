@protocol PXDisplayAssetFetchResult;

@interface PXDisplayAssetFetchResultEnumerator : PXEnumerator {
    id<PXDisplayAssetFetchResult> _fetchResult;
    long long _currentIndex;
}

- (id)init;
- (unsigned long long)count;
- (id)nextObject;
- (void).cxx_destruct;
- (id)firstObject;
- (void)reset;
- (id)initWithDisplayAssetFetchResult:(id)a0;

@end
