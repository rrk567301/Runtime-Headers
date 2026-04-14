@class PXSectionedDataSource, NSNumber, PXIndexPathSet;

@interface PXSectionedDataSourceEnumerator : PXEnumerator {
    NSNumber *_cachedCount;
    long long _currentPhase;
    struct PXSimpleIndexPath { long long dataSourceIdentifier; long long section; long long item; long long subitem; } _lastIndexPath;
}

@property (readonly, nonatomic) PXSectionedDataSource *dataSource;
@property (readonly, nonatomic) PXIndexPathSet *indexPathSet;
@property (readonly, nonatomic) unsigned long long enumeratedTypes;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)nextObject;
- (void).cxx_destruct;
- (id)firstObject;
- (void)reset;
- (id)initWithDataSource:(id)a0 indexPathSet:(id)a1 enumeratedTypes:(unsigned long long)a2;
- (void)_setToInitialState;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_nextSectionIndexPathFromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_nextItemIndexPathFromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })_nextSubitemIndexPathFromIndexPath:(struct PXSimpleIndexPath { long long x0; long long x1; long long x2; long long x3; })a0;
- (void)_transitionToNextPhase;

@end
