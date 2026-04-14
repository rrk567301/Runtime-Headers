@class NSMutableArray;

@interface MAUSBQueue : NSObject {
    NSMutableArray *_array;
}

@property (readonly) unsigned long long count;

- (void)removeObject:(id)a0;
- (id)init;
- (id)dequeueObject;
- (void)removeAllObjects;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)enqueueObject:(id)a0;
- (void).cxx_destruct;
- (id)peakFront;

@end
