@class NSMutableArray;

@interface KHDBQueue : NSObject {
    int _spinlock;
    unsigned long long _front;
    unsigned long long _back;
    NSMutableArray *_storage;
}

+ (void)testQueues;

- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (id)init;
- (unsigned long long)count;
- (id)description;
- (void)dealloc;
- (id)popObject;

@end
