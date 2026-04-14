@class NSEnumerator;

@interface _CNLazyArrayEnumeratorSource : NSObject <_CNLazyArrayOperation> {
    NSEnumerator *_enumerator;
}

- (id)initWithEnumerator:(id)a0;
- (id)nextObject;
- (void).cxx_destruct;

@end
