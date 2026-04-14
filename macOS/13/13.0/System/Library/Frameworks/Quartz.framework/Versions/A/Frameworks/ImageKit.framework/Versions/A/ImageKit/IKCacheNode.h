@class IKCacheData, IKImageWrapper;

@interface IKCacheNode : NSObject {
    unsigned long long _uid;
    int _size;
    IKImageWrapper *_thumbnail;
    id _data[2];
    IKCacheData *_parent;
}

- (void)dealloc;
- (int)size;
- (void)setSize:(int)a0;
- (unsigned long long)uid;
- (id)parent;
- (id)thumbnail;
- (void)setThumbnail:(id)a0;
- (void)setParent:(id)a0;
- (id)initWithParent:(id)a0 uid:(unsigned long long)a1 database:(id)a2 size:(int)a3;
- (void)willDie;
- (void)setObject:(id)a0 forCacheKey:(int)a1;
- (id)objectForCacheKey:(int)a0;
- (void)removeObjectForCacheKey:(int)a0;

@end
