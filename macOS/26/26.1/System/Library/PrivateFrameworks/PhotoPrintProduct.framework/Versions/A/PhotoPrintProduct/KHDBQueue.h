@class NSMutableArray;

@interface KHDBQueue : NSObject {
    int _spinlock;
    unsigned long long _front;
    unsigned long long _back;
    NSMutableArray *_storage;
}

+ (void)testQueues;

- (void)removeAllObjects;
- (id)description;
- (void)dealloc;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (id)init;
- (id)popObject;

@end
