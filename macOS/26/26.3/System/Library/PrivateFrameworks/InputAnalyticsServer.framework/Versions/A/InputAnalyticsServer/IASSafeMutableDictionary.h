@class NSMutableDictionary;

@interface IASSafeMutableDictionary : NSMutableDictionary

@property (retain, nonatomic) NSMutableDictionary *internalDictionary;

- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;

@end
