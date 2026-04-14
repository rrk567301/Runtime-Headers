@class NSArray, AMSThreadSafeObject;

@interface AMSThreadSafeDictionary : NSObject

@property (retain) AMSThreadSafeObject *backingDictionary;
@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;

- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (void)readWrite:(id /* block */)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
