@class NSMutableArray;

@interface PHASEContainerNodeDefinition : PHASESoundEventNodeDefinition {
    NSMutableArray *_subtrees;
}

+ (id)new;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (id)children;
- (void).cxx_destruct;
- (void)addSubtree:(id)a0;

@end
