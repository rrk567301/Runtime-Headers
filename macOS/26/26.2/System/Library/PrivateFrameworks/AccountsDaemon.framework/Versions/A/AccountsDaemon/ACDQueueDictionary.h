@class NSMutableDictionary;

@interface ACDQueueDictionary : NSObject {
    NSMutableDictionary *_allQueuesByID;
}

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEmpty;
- (id)init;
- (id)dequeueAllObjectsInQueueForKey:(id)a0;
- (void)addObject:(id)a0 toQueueForKey:(id)a1;
- (id)dequeueFirstObjectInQueueForKey:(id)a0;
- (id)firstObjectInQueueForKey:(id)a0;
- (BOOL)isQueueEmptyForKey:(id)a0;
- (id)keyForRandomQueue;

@end
