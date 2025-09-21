@class NSMutableArray;

@interface KHDBQueue : NSObject {
    int _spinlock;
    unsigned long long _front;
    unsigned long long _back;
    NSMutableArray *_storage;
}

+ (void)testQueues;

- (void)dealloc;
- (unsigned long long)count;
- (id)init;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (id)description;
- (id)popObject;

@end
