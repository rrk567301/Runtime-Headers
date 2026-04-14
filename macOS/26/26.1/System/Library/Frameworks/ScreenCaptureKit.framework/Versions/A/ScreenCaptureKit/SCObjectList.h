@class NSMutableDictionary;

@interface SCObjectList : NSObject {
    NSMutableDictionary *_objectList;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _objectListLock;
}

- (id)removeAllEntries;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)count;
- (id)init;
- (id)objectForObjectID:(id)a0;
- (BOOL)addObject:(id)a0 withObjectID:(id)a1;
- (id)copyAllEntries;
- (BOOL)removeObjectWithObjectID:(id)a0;

@end
