@class NSArray, NSMutableArray, NFUnfairLock;

@interface FCThreadSafeMutableArray : NSObject {
    NFUnfairLock *_lock;
    NSMutableArray *_array;
}

@property (readonly) unsigned long long count;
@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id lastObject;
@property (readonly, copy, nonatomic) NSArray *readOnlyArray;

- (void)addObjectsFromArray:(id)a0;
- (void)readWriteWithAccessor:(id /* block */)a0;
- (void)removeFirstObject;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (id)init;
- (id)firstObjectPassingTest:(id /* block */)a0;
- (void)safelyAddObject:(id)a0;

@end
