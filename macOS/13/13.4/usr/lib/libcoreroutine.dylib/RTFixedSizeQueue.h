@class NSMutableArray;

@interface RTFixedSizeQueue : NSObject

@property (readonly, nonatomic) NSMutableArray *objects;
@property (readonly, nonatomic) unsigned long long capacity;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)firstObject;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)lastObject;
- (id)objectAtIndex:(long long)a0;
- (id)dequeueObject;
- (id)enqueueObject:(id)a0;

@end
