@class GEORegionStore, _GEORegionIteratorIvars;

@interface _GEORegionIterator : NSObject {
    GEORegionStore *_regionStore;
    id /* block */ _query;
    _GEORegionIteratorIvars *_ivars;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)init:(id)a0 query:(id /* block */)a1;
- (void)nextRegion:(id /* block */)a0;

@end
