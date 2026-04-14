@protocol PXDisplayAssetFetchResult;

@interface PXDisplayAssetFetchResultEnumerator : PXEnumerator {
    id<PXDisplayAssetFetchResult> _fetchResult;
    long long _currentIndex;
}

- (id)firstObject;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)nextObject;
- (unsigned long long)count;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDisplayAssetFetchResult:(id)a0;

@end
