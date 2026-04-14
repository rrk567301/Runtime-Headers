@class _HKFilter;

@interface HKSampleListDataProviderFilter : NSObject {
    _HKFilter *_filter;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)acceptsDataObject:(id)a0;
- (id)initWithPredicate:(id)a0 dataTypes:(id)a1;

@end
