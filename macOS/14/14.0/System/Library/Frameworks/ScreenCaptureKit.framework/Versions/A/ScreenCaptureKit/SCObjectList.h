@class NSMutableDictionary;

@interface SCObjectList : NSObject {
    NSMutableDictionary *_objectList;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _objectListLock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)removeAllEntries;
- (id)objectForObjectID:(id)a0;
- (BOOL)addObject:(id)a0 withObjectID:(id)a1;
- (BOOL)removeObjectWithObjectID:(id)a0;

@end
