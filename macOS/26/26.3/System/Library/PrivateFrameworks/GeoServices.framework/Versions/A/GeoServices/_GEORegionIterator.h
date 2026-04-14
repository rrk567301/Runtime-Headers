@class GEORegionStore, _GEORegionIteratorIvars;

@interface _GEORegionIterator : NSObject {
    GEORegionStore *_regionStore;
    id /* block */ _query;
    _GEORegionIteratorIvars *_ivars;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init:(id)a0 query:(id /* block */)a1;
- (void)nextRegion:(id /* block */)a0;

@end
