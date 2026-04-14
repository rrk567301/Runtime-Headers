@class NSString, MANodeFilter;

@interface SKGNode : MANode {
    NSString *_value;
}

@property (class, readonly, nonatomic) MANodeFilter *filter;

@property (readonly, nonatomic) NSString *value;

+ (id)relation;
+ (id)label;
+ (Class)edgeClass;
+ (id)inRelation;
+ (id)outRelation;
+ (id)nodeWithElementIdentifier:(unsigned long long)a0 inGraph:(id)a1;

- (id)initWithValue:(id)a0;
- (id)filter;
- (BOOL)isEqual:(id)a0;
- (unsigned short)domain;
- (void).cxx_destruct;
- (id)propertyDictionary;
- (float)weight;
- (id)label;
- (BOOL)isEqualToNode:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;

@end
