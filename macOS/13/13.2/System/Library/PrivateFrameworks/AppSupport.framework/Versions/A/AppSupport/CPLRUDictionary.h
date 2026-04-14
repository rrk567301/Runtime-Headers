@class CPLRUDictionaryNode;

@interface CPLRUDictionary : NSObject {
    struct __CFDictionary { } *_dictionary;
    unsigned long long _maxCount;
    CPLRUDictionaryNode *_head;
    CPLRUDictionaryNode *_tail;
}

+ (id)dictionaryWithMaximumCapacity:(unsigned long long)a0;

- (void)dealloc;
- (id)description;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)allKeys;
- (void)_removeNodeFromLinkedList:(id)a0;
- (void)_removeNode:(id)a0;
- (void)_moveNodeToFront:(id)a0;
- (void)_addNodeToFront:(id)a0;
- (id)initWithMaximumCapacity:(unsigned long long)a0;
- (unsigned long long)linkedListCount;
- (id)allKeysInLRUOrder;
- (id)allValuesInLRUOrder;
- (id)objectForKeyWithoutAffectingLRU:(id)a0;

@end
