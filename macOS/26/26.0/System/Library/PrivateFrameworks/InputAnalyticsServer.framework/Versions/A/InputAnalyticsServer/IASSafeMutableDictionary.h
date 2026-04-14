@class NSMutableDictionary;

@interface IASSafeMutableDictionary : NSMutableDictionary

@property (retain, nonatomic) NSMutableDictionary *internalDictionary;

- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
