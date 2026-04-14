@class NSArray;

@interface _MSVConcatArrayEnumerator : NSEnumerator {
    NSArray *_arrays;
    unsigned long long _index;
    unsigned long long _innerIndex;
}

- (void).cxx_destruct;
- (id)nextObject;

@end
