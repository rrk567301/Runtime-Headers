@class CPLRUDictionaryNode;

@interface CPLRUDictionary : NSObject {
    struct __CFDictionary { } *_dictionary;
    unsigned long long _maxCount;
    CPLRUDictionaryNode *_head;
    CPLRUDictionaryNode *_tail;
}

+ (id)dictionaryWithMaximumCapacity:(unsigned long long)a0;

- (id)initWithMaximumCapacity:(unsigned long long)a0;
- (unsigned long long)count;
- (void)_removeNodeFromLinkedList:(id)a0;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (id)description;
- (void)_addNodeToFront:(id)a0;
- (id)allValuesInLRUOrder;
- (id)objectForKeyWithoutAffectingLRU:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (id)allKeysInLRUOrder;
- (void)_removeNode:(id)a0;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (void)_moveNodeToFront:(id)a0;
- (unsigned long long)linkedListCount;

@end
