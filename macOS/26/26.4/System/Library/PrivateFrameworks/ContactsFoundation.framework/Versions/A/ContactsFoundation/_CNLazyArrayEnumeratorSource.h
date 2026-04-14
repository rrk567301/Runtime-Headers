@class NSEnumerator;

@interface _CNLazyArrayEnumeratorSource : NSObject <_CNLazyArrayOperation> {
    NSEnumerator *_enumerator;
}

- (id)initWithEnumerator:(id)a0;
- (void).cxx_destruct;
- (id)nextObject;

@end
