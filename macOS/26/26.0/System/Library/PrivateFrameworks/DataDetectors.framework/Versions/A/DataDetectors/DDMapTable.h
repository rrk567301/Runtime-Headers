@class NSMutableDictionary;

@interface DDMapTable : NSObject {
    NSMutableDictionary *_content;
}

- (id)objectForKey:(id)a0;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)dictionary;
- (void).cxx_destruct;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;

@end
