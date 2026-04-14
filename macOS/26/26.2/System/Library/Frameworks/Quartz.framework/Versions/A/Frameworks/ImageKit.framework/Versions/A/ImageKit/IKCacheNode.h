@class IKCacheData, IKImageWrapper;

@interface IKCacheNode : NSObject {
    unsigned long long _uid;
    int _size;
    IKImageWrapper *_thumbnail;
    id _data[2];
    IKCacheData *_parent;
}

- (id)thumbnail;
- (id)parent;
- (void)setSize:(int)a0;
- (unsigned long long)uid;
- (int)size;
- (void)setParent:(id)a0;
- (void)setThumbnail:(id)a0;
- (void)dealloc;
- (void)willDie;
- (id)initWithParent:(id)a0 uid:(unsigned long long)a1 database:(id)a2 size:(int)a3;
- (id)objectForCacheKey:(int)a0;
- (void)removeObjectForCacheKey:(int)a0;
- (void)setObject:(id)a0 forCacheKey:(int)a1;

@end
