@class CPLRUDictionaryNode;

@interface CPLRUDictionary : NSObject {
    struct __CFDictionary { } *_dictionary;
    unsigned long long _maxCount;
    CPLRUDictionaryNode *_head;
    CPLRUDictionaryNode *_tail;
}

+ (id)dictionaryWithMaximumCapacity:(unsigned long long)a0;

- (id)initWithMaximumCapacity:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (void)_removeNodeFromLinkedList:(id)a0;
- (void)_removeNode:(id)a0;
- (void)_moveNodeToFront:(id)a0;
- (id)objectForKeyWithoutAffectingLRU:(id)a0;
- (void)_addNodeToFront:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (id)description;
- (unsigned long long)linkedListCount;
- (void)dealloc;
- (id)allKeys;
- (id)allKeysInLRUOrder;
- (id)allValuesInLRUOrder;

@end
