@class NSAttributeDictionary;

@interface NSAttributeDictionaryEnumerator : NSEnumerator {
    NSAttributeDictionary *dictionary;
    unsigned long long nextElement;
}

- (id)nextObject;
- (void)dealloc;
- (id)initWithAttributeDictionary:(id)a0;

@end
