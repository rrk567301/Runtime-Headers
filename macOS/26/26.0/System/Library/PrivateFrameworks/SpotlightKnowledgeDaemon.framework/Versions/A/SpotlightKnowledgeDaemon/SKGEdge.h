@class MAEdgeFilter, NSNumber;

@interface SKGEdge : MAEdge

@property (class, readonly, nonatomic) MAEdgeFilter *filter;

@property (readonly, nonatomic) NSNumber *score;

+ (id)name;
+ (Class)nodeClass;
+ (id)edgeFromNode:(id)a0 toNode:(id)a1;
+ (id)edgeWithElementIdentifier:(unsigned long long)a0 inGraph:(id)a1;

- (float)weight;
- (unsigned short)domain;
- (id)propertyDictionary;
- (id)label;
- (BOOL)isEqual:(id)a0;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)initWithSourceNode:(id)a0 targetNode:(id)a1;
- (BOOL)isEqualToEdge:(id)a0;

@end
