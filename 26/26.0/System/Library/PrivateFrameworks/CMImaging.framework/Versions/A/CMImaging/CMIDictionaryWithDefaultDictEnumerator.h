@class NSDictionary, NSEnumerator;

@interface CMIDictionaryWithDefaultDictEnumerator : NSEnumerator

@property (readonly) NSDictionary *mainDict;
@property (readonly) NSEnumerator *mainDictEnumerator;
@property (readonly) NSEnumerator *defaultDictEnumerator;

- (id)nextObject;
- (void).cxx_destruct;
- (id)initWithMainDict:(id)a0 defaultDict:(id)a1;

@end
