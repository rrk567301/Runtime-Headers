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
- (id)initWithUUID:(id)a0;
- (id)label;
- (BOOL)hasProperties:(id)a0;
- (id)propertyDictionary;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;

@end
