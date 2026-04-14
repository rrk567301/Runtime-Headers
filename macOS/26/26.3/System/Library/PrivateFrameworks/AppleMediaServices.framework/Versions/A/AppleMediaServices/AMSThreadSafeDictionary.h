@class NSArray, AMSThreadSafeObject;

@interface AMSThreadSafeDictionary : NSObject

@property (retain) AMSThreadSafeObject *backingDictionary;
@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void)readWrite:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;

@end
