@class NSMutableDictionary;

@interface IASSafeMutableDictionary : NSMutableDictionary

@property (retain, nonatomic) NSMutableDictionary *internalDictionary;

- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (unsigned long long)count;
- (id)keyEnumerator;

@end
