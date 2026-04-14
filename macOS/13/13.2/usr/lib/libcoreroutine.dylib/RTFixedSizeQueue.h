@class NSMutableArray;

@interface RTFixedSizeQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *objects;
@property (readonly, nonatomic) unsigned long long capacity;

- (unsigned long long)count;
- (id)objectAtIndex:(long long)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)firstObject;
- (id)lastObject;
- (id)enqueueObject:(id)a0;
- (id)dequeueObject;

@end
