@class NSDateInterval;
@protocol PGMemoryNodeProtocol;

@interface PGMemoryTriggerResult : NSObject

@property (readonly, nonatomic) id<PGMemoryNodeProtocol> memoryNode;
@property (readonly, nonatomic) NSDateInterval *validityInterval;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMemoryNode:(id)a0 validityInterval:(id)a1;

@end
