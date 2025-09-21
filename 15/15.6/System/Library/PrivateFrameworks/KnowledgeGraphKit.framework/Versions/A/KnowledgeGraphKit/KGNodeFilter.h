@interface KGNodeFilter : KGElementFilter

@property (class, readonly, nonatomic) KGNodeFilter *any;

@property (nonatomic) char whereNoInAndOutEdges;
@property (nonatomic) char whereNoOutEdges;
@property (nonatomic) char whereNoInEdges;

- (char)matchesNode:(id)a0;

@end
