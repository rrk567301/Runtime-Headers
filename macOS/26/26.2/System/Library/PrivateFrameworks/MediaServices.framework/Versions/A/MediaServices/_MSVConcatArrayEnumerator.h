@class NSArray;

@interface _MSVConcatArrayEnumerator : NSEnumerator {
    NSArray *_arrays;
    unsigned long long _index;
    unsigned long long _innerIndex;
}

- (id)nextObject;
- (void).cxx_destruct;

@end
