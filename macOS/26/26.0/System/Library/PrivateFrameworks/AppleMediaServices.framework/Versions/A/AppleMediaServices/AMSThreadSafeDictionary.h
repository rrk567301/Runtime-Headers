@class NSArray, AMSThreadSafeObject;

@interface AMSThreadSafeDictionary : NSObject

@property (retain) AMSThreadSafeObject *backingDictionary;
@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;

- (id)objectForKeyedSubscript:(id)a0;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)readWrite:(id /* block */)a0;
- (void).cxx_destruct;

@end
