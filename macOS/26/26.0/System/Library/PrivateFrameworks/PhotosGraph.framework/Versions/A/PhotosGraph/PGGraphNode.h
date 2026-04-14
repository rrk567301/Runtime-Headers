@class NSString, MANodeFilter;

@interface PGGraphNode : MANode <PGGraphElement>

@property (class, readonly, nonatomic) MANodeFilter *filter;

@property (readonly, nonatomic) MANodeFilter *entityFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (float)weight;
- (void)setWeight:(float)a0;
- (id)UUID;
- (id)propertyForKey:(id)a0;
- (id)init;
- (id)name;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (id)shortDescription;
- (unsigned long long)propertiesCount;
- (BOOL)isEqualToNode:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)keywordDescription;

@end
