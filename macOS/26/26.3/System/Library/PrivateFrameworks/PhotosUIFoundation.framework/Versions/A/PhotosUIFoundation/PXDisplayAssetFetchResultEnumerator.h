@protocol PXDisplayAssetFetchResult;

@interface PXDisplayAssetFetchResultEnumerator : PXEnumerator {
    id<PXDisplayAssetFetchResult> _fetchResult;
    long long _currentIndex;
}

- (unsigned long long)count;
- (id)nextObject;
- (id)init;
- (void).cxx_destruct;
- (id)firstObject;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDisplayAssetFetchResult:(id)a0;

@end
