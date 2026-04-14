@class NSArray, NSMutableArray, NFUnfairLock;

@interface FCThreadSafeMutableArray : NSObject {
    NFUnfairLock *_lock;
    NSMutableArray *_array;
}

@property (readonly) unsigned long long count;
@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id lastObject;
@property (readonly, copy, nonatomic) NSArray *readOnlyArray;

- (void)safelyAddObject:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)readWriteWithAccessor:(id /* block */)a0;
- (void)addObjectsFromArray:(id)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)firstObjectPassingTest:(id /* block */)a0;
- (id)init;
- (void)removeAllObjects;
- (void)removeFirstObject;

@end
