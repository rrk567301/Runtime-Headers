@class NSArray, NSMutableDictionary, NSMutableArray;

@interface GKGraph : NSObject <NSCopying, NSSecureCoding> {
    NSMutableArray *_nodes;
    void *_cGraph;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *_info;
@property (readonly, nonatomic) NSArray *nodes;

+ (id)graph;
+ (id)graphWithNodes:(id)a0;

- (void)dealloc;
- (id)copy;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addNodes:(id)a0;
- (void)removeNodes:(id)a0;
- (id)initWithNodes:(id)a0;
- (void *)makeCGraph;
- (void *)cGraph;
- (id)nodesMut;
- (void)connectNodeToLowestCostNode:(id)a0 bidirectional:(BOOL)a1;
- (id)findPathFromNode:(id)a0 toNode:(id)a1;

@end
