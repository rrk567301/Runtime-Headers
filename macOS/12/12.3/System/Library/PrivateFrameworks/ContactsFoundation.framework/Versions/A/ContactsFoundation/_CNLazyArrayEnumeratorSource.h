@class NSEnumerator;

@interface _CNLazyArrayEnumeratorSource : NSObject <_CNLazyArrayOperation> {
    NSEnumerator *_enumerator;
}

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithEnumerator:(id)a0;

@end
