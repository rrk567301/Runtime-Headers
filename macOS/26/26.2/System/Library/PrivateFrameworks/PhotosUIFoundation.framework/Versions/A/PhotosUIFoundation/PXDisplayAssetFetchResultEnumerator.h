@protocol PXDisplayAssetFetchResult;

@interface PXDisplayAssetFetchResultEnumerator : PXEnumerator {
    id<PXDisplayAssetFetchResult> _fetchResult;
    long long _currentIndex;
}

- (id)nextObject;
- (id)firstObject;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDisplayAssetFetchResult:(id)a0;

@end
