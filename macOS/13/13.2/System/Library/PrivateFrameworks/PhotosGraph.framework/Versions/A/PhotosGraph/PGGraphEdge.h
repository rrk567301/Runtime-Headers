@class MAEdgeFilter, NSString;

@interface PGGraphEdge : MAEdge <PGGraphElement>

@property (class, readonly, nonatomic) MAEdgeFilter *filter;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)propertyForKey:(id)a0;
- (float)weight;
- (void)setWeight:(float)a0;
- (unsigned long long)propertiesCount;
- (id)initWithSourceNode:(id)a0 targetNode:(id)a1;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)keywordDescription;
- (BOOL)isEqualToEdge:(id)a0;

@end
