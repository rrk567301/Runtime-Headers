@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface GKThreadsafeDictionary : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableDictionary *dictionary;

- (void)setObject:(id)a0 forKeyedSubscript:(id)a1;
- (void)removeObjectsForKeys:(id)a0;
- (id)allKeys;
- (void)asyncWriteToDictionary:(id /* block */)a0;
- (id)objectForKey:(id)a0;
- (id)description;
- (id)initWithName:(id)a0;
- (id)allObjects;
- (id)objectForKeyedSubscript:(id)a0;
- (id)dictionaryCopy;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0 objectProducerBlock:(id /* block */)a1;
- (id)objectForKeyWillReplace:(id)a0 objectProducerBlock:(id /* block */)a1;
- (void)readFromDictionary:(id /* block */)a0;
- (void)removeAllObjects;
- (void)writeToDictionary:(id /* block */)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeObject:(id)a0;

@end
