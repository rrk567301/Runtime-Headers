@class MAEdgeFilter;

@interface SKGEdges : MAEdgeCollection

@property (class, readonly, nonatomic) Class nodeClass;
@property (class, readonly, nonatomic) Class edgeClass;
@property (class, readonly, nonatomic) MAEdgeFilter *filter;

@property (nonatomic) unsigned long long edgeIdentifier;

+ (id)labels;
+ (id)edgesInGraph:(id)a0;
+ (id)edgesWithEdge:(id)a0 inGraph:(id)a1;

- (void)enumerateEdgesInGraph:(id)a0 usingBlock:(id /* block */)a1;

@end
