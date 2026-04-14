@class GCPhysicalInputElementCollection, NSArray, Protocol;

@interface _GCPhysicalInputFilteredElementCollection : GCPhysicalInputElementCollection {
    GCPhysicalInputElementCollection *_backingCollection;
    Protocol *_filter;
    NSArray *_cached_filteredElements;
}

- (id)elementAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)elementEnumerator;
- (id)elementForAlias:(id)a0;

@end
