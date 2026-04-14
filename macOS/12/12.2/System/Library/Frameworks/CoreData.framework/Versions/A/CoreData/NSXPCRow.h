@interface NSXPCRow : NSPersistentCacheRow {
    id _node;
}

- (void)dealloc;
- (id)objectID;
- (id)initWithNode:(id)a0;

@end
