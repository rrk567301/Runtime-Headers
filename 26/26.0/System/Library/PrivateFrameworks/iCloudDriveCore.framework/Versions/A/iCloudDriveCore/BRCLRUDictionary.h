@class NSMutableDictionary, BRCLRUDictionaryNode;

@interface BRCLRUDictionary : NSObject <NSCopying>

@property (retain, nonatomic) NSMutableDictionary *dictionary;
@property (retain, nonatomic) BRCLRUDictionaryNode *head;
@property (retain, nonatomic) BRCLRUDictionaryNode *tail;
@property (nonatomic) unsigned long long maximumCapacity;
@property (readonly, nonatomic) unsigned long long count;

- (id)objectForKeyedSubscript:(id)a0;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)_addNodeToFront:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)description;
- (void)_removeNodeFromLinkedList:(id)a0;
- (void)_shrinkToCapacity;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)_removeNode:(id)a0;
- (void)_moveNodeToFront:(id)a0;
- (id)allValues;
- (void).cxx_destruct;
- (id)initWithMaximumCapacity:(unsigned long long)a0;

@end
