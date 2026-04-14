@class NSMapTable;

@interface TSTTableDataListItemCache : NSObject {
    NSMapTable *_data;
}

+ (id)cache;

- (id)init;
- (void)removeAllObjects;
- (id)objectForKey:(unsigned int)a0;
- (void)setObject:(id)a0 forKey:(unsigned int)a1;
- (void).cxx_destruct;

@end
