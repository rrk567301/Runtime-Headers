@class NSEnumerator, XCTElementFilteringTransformer;

@interface XCTFilteringTransformerIterator : XCTMatchingElementIterator {
    NSEnumerator *_inputEnumerator;
}

@property (readonly) XCTElementFilteringTransformer *filteringTransformer;

- (void).cxx_destruct;
- (id)nextMatch;
- (id)initWithInput:(id)a0 filteringTransformer:(id)a1;

@end
