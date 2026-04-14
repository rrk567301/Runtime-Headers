@protocol NSCopying;

@interface AMSLRUCacheItem : AMSDoubleLinkedListNode

@property (weak) id<NSCopying> key;

- (void).cxx_destruct;
- (id)initWithKey:(id)a0 object:(id)a1;

@end
