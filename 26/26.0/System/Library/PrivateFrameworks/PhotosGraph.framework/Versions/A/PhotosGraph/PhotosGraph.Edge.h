@class NSSet, NSDictionary;
@protocol KGNode;

@interface PhotosGraph.Edge : NSObject <KGEdge> {
    void /* function */ labels;
    void /* function */ properties;
}

@property (nonatomic, retain) id<KGNode> targetNode;
@property (nonatomic, retain) id<KGNode> sourceNode;
@property (nonatomic) unsigned long long identifier;
@property (nonatomic, copy) NSSet *labels;
@property (nonatomic, copy) NSDictionary *properties;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2 sourceNode:(id)a3 targetNode:(id)a4;
- (void)resolveIdentifier:(unsigned long long)a0;

@end
