@class NSArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AMSThreadSafeDictionary : NSObject

@property (retain) NSMutableDictionary *backingDictionary;
@property (retain) NSObject<OS_dispatch_queue> *backingDictionaryAccessQueue;
@property (readonly, copy) NSArray *allKeys;
@property (readonly, copy) NSArray *allValues;

- (id)init;
- (void)removeAllObjects;
- (id)objectForKey:(id)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;

@end
