@class NSEnumerator;

@interface _MSVLazyFilterEnumerator : NSEnumerator {
    NSEnumerator *_enumerator;
    id /* block */ _block;
}

- (void).cxx_destruct;
- (id)nextObject;

@end
