@class NSSimpleAttributeDictionary;

@interface NSSimpleAttributeDictionaryEnumerator : NSEnumerator {
    NSSimpleAttributeDictionary *dictionary;
    unsigned long long nextElement;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithAttributeDictionary:(id)a0;

@end
