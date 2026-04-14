@class NSMapTable, NSMutableArray;

@interface TSTTableDataListItemCache : NSObject {
    NSMapTable *_data;
    NSMutableArray *_strongRefs;
}

+ (id)cache;

- (id)objectForKey:(unsigned int)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(unsigned int)a1;
- (id)init;

@end
