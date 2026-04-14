@class NSMutableArray;

@interface PHASERandomNodeDefinition : PHASESoundEventNodeDefinition

@property (retain, nonatomic) NSMutableArray *subtrees;
@property (nonatomic) long long uniqueSelectionQueueLength;

- (id)children;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addSubtree:(id)a0 weight:(id)a1;

@end
