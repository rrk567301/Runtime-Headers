@class NSLock, NSMutableArray;

@interface AXSSRingBuffer : NSObject

@property (nonatomic) long long size;
@property (retain, nonatomic) NSMutableArray *storage;
@property (nonatomic) long long lastEntryIndex;
@property (retain, nonatomic) NSLock *lock;

- (void)clear;
- (long long)addObject:(id)a0;
- (id)initWithSize:(long long)a0;
- (void).cxx_destruct;
- (id)objectAtIndex:(long long)a0;
- (id)init;
- (id)description;
- (long long)currentFilledSize;

@end
