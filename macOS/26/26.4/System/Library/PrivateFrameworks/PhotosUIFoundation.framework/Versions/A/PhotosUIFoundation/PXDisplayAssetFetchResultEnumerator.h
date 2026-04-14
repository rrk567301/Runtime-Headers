@protocol PXDisplayAssetFetchResult;

@interface PXDisplayAssetFetchResultEnumerator : PXEnumerator {
    id<PXDisplayAssetFetchResult> _fetchResult;
    long long _currentIndex;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)firstObject;
- (void).cxx_destruct;
- (void)reset;
- (id)init;
- (unsigned long long)count;
- (id)nextObject;
- (id)initWithDisplayAssetFetchResult:(id)a0;

@end
