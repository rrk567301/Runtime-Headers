@class NSMutableArray;

@interface MAUSBQueue : NSObject {
    NSMutableArray *_array;
}

@property (readonly) unsigned long long count;

- (void)enqueueObject:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)removeObject:(id)a0;
- (void).cxx_destruct;
- (id)dequeueObject;
- (id)init;
- (void)removeAllObjects;
- (id)peakFront;

@end
