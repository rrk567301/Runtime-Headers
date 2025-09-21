@class NSMutableDictionary;

@interface ACDQueueDictionary : NSObject {
    NSMutableDictionary *_allQueuesByID;
}

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (char)isEmpty;
- (id)dequeueAllObjectsInQueueForKey:(id)a0;
- (void)addObject:(id)a0 toQueueForKey:(id)a1;
- (id)dequeueFirstObjectInQueueForKey:(id)a0;
- (id)firstObjectInQueueForKey:(id)a0;
- (char)isQueueEmptyForKey:(id)a0;
- (id)keyForRandomQueue;

@end
