@class NSString, NSMutableArray, NSTextStorage;

@interface NSTextStorageElementArray : NSArray {
    NSTextStorage *_container;
    NSString *_key;
    unsigned long long _count;
    NSMutableArray *_elements;
}

- (unsigned long long)count;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)initWithContainer:(id)a0 key:(id)a1;
- (void)tokenizeToCount:(unsigned long long)a0;

@end
