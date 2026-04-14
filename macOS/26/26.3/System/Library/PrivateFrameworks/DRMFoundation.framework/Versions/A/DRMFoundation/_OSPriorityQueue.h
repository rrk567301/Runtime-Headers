@class NSNumber, NSMutableDictionary;

@interface _OSPriorityQueue : NSObject

@property (retain, nonatomic) NSMutableDictionary *objects;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSNumber *lowestPriority;
@property (retain, nonatomic) NSNumber *highestPriority;

+ (id)priorityQueue;

- (id)popLast;
- (id)description;
- (id)init;
- (id)allObjects;
- (void).cxx_destruct;
- (id)popFirst;
- (void)removeObject:(id)a0 atPriority:(unsigned long long)a1;
- (void)addObject:(id)a0 withPriority:(unsigned long long)a1;

@end
