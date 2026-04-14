@class NSMapTable;

@interface HDIdentifierTable : NSObject {
    NSMapTable *_map;
    unsigned long long _nextIdentifier;
}

- (unsigned long long)count;
- (unsigned long long)addObject:(id)a0;
- (void)removeAllObjects;
- (id)allObjects;
- (void).cxx_destruct;
- (id)objectWithIdentifier:(unsigned long long)a0;
- (void)removeObjectWithIdentifier:(unsigned long long)a0;

@end
