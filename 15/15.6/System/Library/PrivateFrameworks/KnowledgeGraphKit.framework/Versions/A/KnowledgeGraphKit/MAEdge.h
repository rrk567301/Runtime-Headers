@class NSString, NSSet, NSDictionary, MAGraphReference, MANode;
@protocol MAGraphProxy;

@interface MAEdge : NSObject <MAElement, NSCopying, KGEdge>

@property (retain, nonatomic) MAGraphReference *graphReference;
@property (nonatomic) unsigned long long identifier;
@property (readonly, nonatomic) MANode *sourceNode;
@property (readonly, nonatomic) MANode *targetNode;
@property (readonly, nonatomic) id<MAGraphProxy> graph;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, nonatomic) unsigned short domain;
@property (readonly, nonatomic) float weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSSet *labels;
@property (readonly, copy, nonatomic) NSDictionary *properties;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)propertyForKey:(id)a0;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)a0;
- (id)shortDescription;
- (char)isUnique;
- (unsigned long long)propertiesCount;
- (void)enumeratePropertiesUsingBlock:(id /* block */)a0;
- (id)propertyKeys;
- (char)hasProperties;
- (id)commonNode:(id)a0;
- (char)hasProperties:(id)a0;
- (char)isLoop;
- (id)oppositeNode:(id)a0;
- (char)hasEqualPropertiesToEdge:(id)a0;
- (id)initWithIdentifier:(unsigned long long)a0 labels:(id)a1 properties:(id)a2 sourceNode:(id)a3 targetNode:(id)a4;
- (id)initWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 weight:(float)a4 properties:(id)a5;
- (id)initWithSourceNode:(id)a0 targetNode:(id)a1;
- (char)isEqualToEdge:(id)a0;
- (char)isIdentifiedByProperties:(id)a0;
- (char)isSameEdgeAsEdge:(id)a0;
- (id)propertyDictionary;
- (void)resolveIdentifier:(unsigned long long)a0;
- (char)conformsToEdgeSchema:(id)a0;
- (id)propertyForKey:(id)a0 kindOfClass:(Class)a1;
- (id)visualString;
- (id)visualStringWithName:(id)a0;
- (id)visualStringWithName:(id)a0 andPropertyKeys:(id)a1;

@end
