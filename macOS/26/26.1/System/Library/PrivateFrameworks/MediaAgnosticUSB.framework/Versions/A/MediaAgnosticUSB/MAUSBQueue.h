@class NSMutableArray;

@interface MAUSBQueue : NSObject {
    NSMutableArray *_array;
}

@property (readonly) unsigned long long count;

- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)removeAllObjects;
- (void)enqueueObject:(id)a0;
- (void)removeObject:(id)a0;
- (id)dequeueObject;
- (void).cxx_destruct;
- (id)init;
- (id)peakFront;

@end
