@class NSString, PGGraphBabyNodeCollection;

@interface PGGraphBabyNode : PGGraphOptimizedNode {
    NSString *_uuid;
}

@property (readonly, nonatomic) PGGraphBabyNodeCollection *collection;

+ (id)filter;
+ (id)momentOfBaby;
+ (id)caretakerOfBaby;

- (id)description;
- (unsigned short)domain;
- (void).cxx_destruct;
- (id)label;
- (id)initWithUUID:(id)a0;
- (BOOL)hasProperties:(id)a0;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (id)propertyDictionary;

@end
