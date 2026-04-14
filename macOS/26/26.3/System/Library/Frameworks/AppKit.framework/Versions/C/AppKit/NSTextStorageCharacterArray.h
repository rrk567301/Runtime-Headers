@class NSTextStorage;

@interface NSTextStorageCharacterArray : NSArray {
    NSTextStorage *_container;
}

- (id)initWithContainer:(id)a0;
- (unsigned long long)count;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;

@end
