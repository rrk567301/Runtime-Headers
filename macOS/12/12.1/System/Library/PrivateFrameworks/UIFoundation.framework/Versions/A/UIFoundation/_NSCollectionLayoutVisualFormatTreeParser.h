@class NSArray, _NSCollectionLayoutVisualTreeNode;

@interface _NSCollectionLayoutVisualFormatTreeParser : NSObject

@property (copy, nonatomic) NSArray *visualFormats;
@property (retain, nonatomic) _NSCollectionLayoutVisualTreeNode *root;

+ (id)treeParserWithVisualFormats:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)_parse;
- (id)initWithVisualFormats:(id)a0;
- (void)_visitChildrenOfNodeDepthFirst:(id)a0 usingBlock:(id /* block */)a1;
- (id)_nodeForParser:(id)a0 withParserDict:(id)a1 size:(id)a2;
- (id)_normalizeFractionsOfLayoutVFLItemsForItems:(id)a0;
- (void)enumerateTreeNodesDepthFirstUsingBlock:(id /* block */)a0;

@end
