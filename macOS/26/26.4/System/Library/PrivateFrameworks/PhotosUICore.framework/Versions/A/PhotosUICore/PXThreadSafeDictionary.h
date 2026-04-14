@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PXThreadSafeDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *internalDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (id)objectForKey:(id)a0;
- (void)removeObjectsForKeys:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (id)safeCopy;

@end
