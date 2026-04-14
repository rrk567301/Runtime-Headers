@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface PXThreadSafeDictionary : NSObject

@property (retain, nonatomic) NSMutableDictionary *internalDictionary;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectsForKeys:(id)a0;
- (id)objectForKey:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)init;
- (id)objectForKeyedSubscript:(id)a0;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;
- (id)safeCopy;

@end
