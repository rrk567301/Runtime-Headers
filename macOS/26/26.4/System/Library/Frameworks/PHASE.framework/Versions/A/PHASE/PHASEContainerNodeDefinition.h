@class NSMutableArray;

@interface PHASEContainerNodeDefinition : PHASESoundEventNodeDefinition {
    NSMutableArray *_subtrees;
}

+ (id)new;

- (id)children;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addSubtree:(id)a0;

@end
