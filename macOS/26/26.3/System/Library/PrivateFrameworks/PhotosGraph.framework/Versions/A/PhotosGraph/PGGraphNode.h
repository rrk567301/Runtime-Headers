@class NSString, MANodeFilter;

@interface PGGraphNode : MANode <PGGraphElement>

@property (class, readonly, nonatomic) MANodeFilter *filter;

@property (readonly, nonatomic) MANodeFilter *entityFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shortDescription;
- (id)UUID;
- (id)init;
- (void)setWeight:(float)a0;
- (float)weight;
- (id)name;
- (id)propertyForKey:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;
- (unsigned long long)propertiesCount;
- (BOOL)isEqualToNode:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)keywordDescription;

@end
