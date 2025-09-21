@class NSTextStorage;

@interface NSTextStorageCharacterArray : NSArray {
    NSTextStorage *_container;
}

- (id)initWithContainer:(id)a0;
- (void)dealloc;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;

@end
