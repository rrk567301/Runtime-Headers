@class NSMutableDictionary;

@interface KGLabelBasedEntityFactory : NSObject <KGEntityFactory> {
    NSMutableDictionary *_classByNodeLabels;
    NSMutableDictionary *_classByEdgeLabels;
}

@property (retain, nonatomic) Class defaultNodeClass;
@property (retain, nonatomic) Class defaultEdgeClass;

- (id)init;
- (void).cxx_destruct;
- (id)nodeWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3;
- (id)edgeWithIdentifier:(unsigned long long)a0 labels:(id)a1 weight:(float)a2 properties:(id)a3 sourceNode:(id)a4 targetNode:(id)a5;
- (id)_generateAllPossibleLabelSetsForLabels:(id)a0 labelSetsCache:(id)a1;
- (Class)_selectClassFromPossibleLabels:(id)a0 dictionary:(id)a1;
- (Class)classForNodeLabels:(id)a0;
- (Class)classForEdgeLabels:(id)a0;
- (void)registerNodeClass:(Class)a0 forLabels:(id)a1;
- (void)registerEdgeClass:(Class)a0 forLabels:(id)a1;

@end
