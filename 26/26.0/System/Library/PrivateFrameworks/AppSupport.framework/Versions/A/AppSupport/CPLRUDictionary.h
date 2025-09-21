@class CPLRUDictionaryNode;

@interface CPLRUDictionary : NSObject {
    struct __CFDictionary { } *_dictionary;
    unsigned long long _maxCount;
    CPLRUDictionaryNode *_head;
    CPLRUDictionaryNode *_tail;
}

+ (id)dictionaryWithMaximumCapacity:(unsigned long long)a0;

- (id)allKeys;
- (void)dealloc;
- (id)objectForKey:(id)a0;
- (id)objectForKeyWithoutAffectingLRU:(id)a0;
- (unsigned long long)count;
- (void)_addNodeToFront:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)description;
- (void)_removeNodeFromLinkedList:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)_removeNode:(id)a0;
- (unsigned long long)linkedListCount;
- (void)_moveNodeToFront:(id)a0;
- (id)allKeysInLRUOrder;
- (id)initWithMaximumCapacity:(unsigned long long)a0;
- (id)allValuesInLRUOrder;

@end
