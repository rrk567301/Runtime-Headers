@class NSLock, NSMutableArray;

@interface AXSSRingBuffer : NSObject

@property (nonatomic) long long size;
@property (retain, nonatomic) NSMutableArray *storage;
@property (nonatomic) long long lastEntryIndex;
@property (retain, nonatomic) NSLock *lock;

- (void)clear;
- (id)objectAtIndex:(long long)a0;
- (void).cxx_destruct;
- (long long)addObject:(id)a0;
- (id)description;
- (id)init;
- (id)initWithSize:(long long)a0;
- (long long)currentFilledSize;

@end
