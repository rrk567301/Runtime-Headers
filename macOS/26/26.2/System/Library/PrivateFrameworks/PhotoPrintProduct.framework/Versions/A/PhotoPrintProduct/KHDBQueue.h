@class NSMutableArray;

@interface KHDBQueue : NSObject {
    int _spinlock;
    unsigned long long _front;
    unsigned long long _back;
    NSMutableArray *_storage;
}

+ (void)testQueues;

- (unsigned long long)count;
- (void)addObject:(id)a0;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (id)popObject;

@end
