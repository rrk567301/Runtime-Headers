@class NSIndexSet;

@interface TSUSparseArray : NSObject <NSCopying> {
    struct tsuSaPage { void /* function */ **x0; } *_topPage;
    unsigned long long _nonNilCount;
    unsigned int _depth;
}

@property (readonly) unsigned long long count;
@property (readonly) unsigned long long minKey;
@property (readonly) unsigned long long maxKey;
@property (readonly) NSIndexSet *populatedKeys;

+ (id)array;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addObjectsFromArray:(id)a0;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (id)objectForKey:(unsigned long long)a0;
- (void)setObject:(id)a0 forKey:(unsigned long long)a1;
- (void)removeObjectForKey:(unsigned long long)a0;
- (void)clear;
- (BOOL)hasObjectForKey:(unsigned long long)a0;
- (void)foreach:(id /* block */)a0;
- (unsigned long long)maxIndexForCurrentDepth;
- (void)increaseDepth;

@end
