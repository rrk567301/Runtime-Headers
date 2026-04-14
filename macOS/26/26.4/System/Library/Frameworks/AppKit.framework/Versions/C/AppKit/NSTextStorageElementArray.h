@class NSString, NSMutableArray, NSTextStorage;

@interface NSTextStorageElementArray : NSArray {
    NSTextStorage *_container;
    NSString *_key;
    unsigned long long _count;
    NSMutableArray *_elements;
}

- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithContainer:(id)a0 key:(id)a1;
- (void)tokenizeToCount:(unsigned long long)a0;

@end
