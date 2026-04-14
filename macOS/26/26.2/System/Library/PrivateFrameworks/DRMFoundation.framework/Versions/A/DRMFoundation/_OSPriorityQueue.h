@class NSNumber, NSMutableDictionary;

@interface _OSPriorityQueue : NSObject

@property (retain, nonatomic) NSMutableDictionary *objects;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSNumber *lowestPriority;
@property (retain, nonatomic) NSNumber *highestPriority;

+ (id)priorityQueue;

- (void)addObject:(id)a0 withPriority:(unsigned long long)a1;
- (void)removeObject:(id)a0 atPriority:(unsigned long long)a1;
- (id)allObjects;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)popLast;
- (id)popFirst;

@end
