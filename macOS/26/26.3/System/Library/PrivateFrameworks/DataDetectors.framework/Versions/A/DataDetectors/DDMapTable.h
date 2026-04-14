@class NSMutableDictionary;

@interface DDMapTable : NSObject {
    NSMutableDictionary *_content;
}

- (void)removeObserver:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (id)objectForKey:(id)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (id)dictionary;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
