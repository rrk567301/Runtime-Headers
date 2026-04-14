@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GKThreadsafeDictionary : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableDictionary *dictionary;

- (id)allObjects;
- (void)removeAllObjects;
- (void)asyncWriteToDictionary:(id /* block */)a0;
- (void)removeObject:(id)a0;
- (id)allKeys;
- (id)objectForKey:(id)a0 objectProducerBlock:(id /* block */)a1;
- (id)objectForKey:(id)a0;
- (id)description;
- (void)readFromDictionary:(id /* block */)a0;
- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (id)initWithName:(id)a0;
- (id)dictionaryCopy;
- (void).cxx_destruct;
- (void)removeObjectsForKeys:(id)a0;
- (id)objectForKeyWillReplace:(id)a0 objectProducerBlock:(id /* block */)a1;
- (id)objectForKeyedSubscript:(id)a0;
- (void)writeToDictionary:(id /* block */)a0;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
