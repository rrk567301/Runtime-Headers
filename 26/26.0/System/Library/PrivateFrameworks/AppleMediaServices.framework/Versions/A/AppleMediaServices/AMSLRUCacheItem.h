@protocol NSCopying;

@interface AMSLRUCacheItem : AMSDoubleLinkedListNode

@property (readonly, nonatomic) id<NSCopying> key;

- (id)initWithKey:(id)a0 object:(id)a1;
- (void).cxx_destruct;

@end
