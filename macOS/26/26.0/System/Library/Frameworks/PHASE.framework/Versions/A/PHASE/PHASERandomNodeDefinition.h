@class NSMutableArray;

@interface PHASERandomNodeDefinition : PHASESoundEventNodeDefinition

@property (retain, nonatomic) NSMutableArray *subtrees;
@property (nonatomic) long long uniqueSelectionQueueLength;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (id)children;
- (void).cxx_destruct;
- (void)addSubtree:(id)a0 weight:(id)a1;

@end
