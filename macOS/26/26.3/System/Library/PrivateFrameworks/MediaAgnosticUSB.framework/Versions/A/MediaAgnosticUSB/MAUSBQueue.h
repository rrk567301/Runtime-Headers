@class NSMutableArray;

@interface MAUSBQueue : NSObject {
    NSMutableArray *_array;
}

@property (readonly) unsigned long long count;

- (void)enqueueObject:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (id)dequeueObject;
- (void)removeObject:(id)a0;
- (id)peakFront;

@end
