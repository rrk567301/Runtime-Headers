@class NSEnumerator;

@interface _MSVLazyFilterEnumerator : NSEnumerator {
    NSEnumerator *_enumerator;
    id /* block */ _block;
}

- (id)nextObject;
- (void).cxx_destruct;

@end
