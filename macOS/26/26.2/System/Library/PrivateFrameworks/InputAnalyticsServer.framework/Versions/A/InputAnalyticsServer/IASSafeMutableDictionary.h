@class NSMutableDictionary;

@interface IASSafeMutableDictionary : NSMutableDictionary

@property (retain, nonatomic) NSMutableDictionary *internalDictionary;

- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)keyEnumerator;

@end
