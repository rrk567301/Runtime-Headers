@class GCPhysicalInputElementCollection;

@interface _GCPhysicalInputElementEnumerator : NSEnumerator {
    GCPhysicalInputElementCollection *_collection;
    unsigned long long _currentIndex;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)init;

@end
