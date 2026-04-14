@class NSMutableDictionary, BRCLRUDictionaryNode;

@interface BRCLRUDictionary : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (retain, nonatomic) BRCLRUDictionaryNode *head;
@property (retain, nonatomic) BRCLRUDictionaryNode *tail;
@property (nonatomic) unsigned long long maximumCapacity;
@property (readonly, nonatomic) unsigned long long count;

- (void)setObject:(id)a0 forKey:(id)a1;
- (void)_removeNodeFromLinkedList:(id)a0;
- (id)allValues;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_moveNodeToFront:(id)a0;
- (id)allKeys;
- (void)_removeNode:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)initWithMaximumCapacity:(unsigned long long)a0;
- (id)description;
- (void)_shrinkToCapacity;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)_addNodeToFront:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
