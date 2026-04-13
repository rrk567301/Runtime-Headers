@interface ObjectCacheByCString : NSObject {
    struct __CFDictionary { } *_dictionary;
}

- (void)dealloc;
- (id)init;
- (void)setObject:(id)a0 forCStringKey:(char *)a1;
- (id)getObjectForCStringKey:(char *)a0;

@end
